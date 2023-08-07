#include "BitcoinExchange.h"
#include "Date.h"
#include <cmath>
#include <cstddef>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <cctype>
#include <sstream>

BitcoinExchange::BitcoinExchange(void): min_date(), max_date(), prices() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& be)
{
	*this = be;
}

static bool is_directory(const std::string& file)
{
	struct stat file_stat;
	if (stat(file.c_str(), &file_stat) == 0) {
		return S_ISDIR(file_stat.st_mode);
	}
	return false;
}

BitcoinExchange::BitcoinExchange(const std::string& file)
: min_date(), max_date(), prices()
{
	std::string		line;
	std::ifstream	infile(file.c_str());

	if (!is_directory(file) && infile.is_open()) {
		std::getline(infile, line);
		while (infile) {
			std::getline(infile, line);
			if (line[0] != 0)
				add_date(line);
		}
	} else {
		std::cerr << "Error: could not open data file\n";
	}
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& be)
{
	if (this != &be) {
		min_date = be.min_date;
		max_date = be.max_date;
		prices = be.prices;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) {}

void	BitcoinExchange::insert_price(std::pair<Date, double> price)
{
	std::vector<std::pair<Date, double> >::iterator it;

	for (it=prices.begin(); it < prices.end() && price > *it; it++) { }
	prices.insert(it, price);
}

static bool is_number(const std::string& s)
{
	for (size_t i=0; i < s.size(); i++) {
		if (!std::isdigit(s[i]) && s[i] != '-' && s[i] != '.' && s[i] != '+')
			return false;
	}
	return true;
}

void	BitcoinExchange::add_date(const std::string& line)
{
	size_t	i = 0;
	std::string	date_str;
	std::string	price_str;
	Date		date;
	double		price;

	while (line[i] && line[i] != ',')
		i++;
	if (line[i] == 0) {
    std::cerr << "Error: data line not with the good format\n";
		return;
  }
	date_str = line.substr(0, i);
	price_str = line.substr(i + 1);
	if (price_str.empty() || !is_number(price_str)) {
		std::cerr << "Error: not a valid priceee: " << price_str << std::endl;
		return;
	}
	date = Date(date_str);
	price = std::atof(price_str.c_str());
	if (price < 0) {
		std::cerr << "Error: not a valid price: " << price << std::endl;
		return;
	}
	if (prices.empty()) {
		min_date = date;
		max_date = date;
	} else {
		min_date = std::min(min_date, date);
		max_date = std::max(max_date, date);
	}
	insert_price(std::pair<Date, double>(date, price));
}

static std::string format_number(int n, int len)
{
  std::ostringstream stream;
  len--;
  while (n < len * 10) {
    stream << '0';
    len--;
  }
  stream << n;
  return stream.str();
}

void	BitcoinExchange::compute_price(const std::string& line) const
{
	Date	date;
	double	amount;
	double	price;
	size_t	pos;

	if (prices.empty()) {
		std::cerr << "Error: no data available\n";
		return;
	}
	pos = line.find(" | ");
	if (pos == std::string::npos) {
		std::cerr << "Error: bad input: '" << line << "'\n";
		return;
	}
	try {
		date = Date(line.substr(0, pos));
	} catch (std::runtime_error& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return;
	}
	amount = std::atof(line.substr(pos + 3).c_str());
	if (amount < 0) {
		std::cerr << "Error: not a positive number\n";
		return;
	} else if (amount > 1000) {
    std::cerr << "Error: too large a number\n";
    return;
  }
	for (size_t i=0; i < prices.size(); i++) {
		if (date < prices[i].first) {
			if (i == 0) {
				std::cerr << "Error: too early date, no data\n";
				return;
			}
			price = prices[i - 1].second;
			break;
		}
		price = prices[i].second;
	}
  std::cout << date.get_year() << "-" << format_number(date.get_month(), 2) << "-" << format_number(date.get_day(), 2) << " => " << amount << " = " << price * amount << std::endl;
}

void	BitcoinExchange::compute_prices(const std::string& file) const
{
	std::string		line;
	std::ifstream	infile(file.c_str());

	if (infile.is_open()) {
		while (infile) {
			std::getline(infile, line);
			if (!line.empty())
				compute_price(line);
		}
	} else {
		std::cerr << "Error: could not open file\n";
	}
}
