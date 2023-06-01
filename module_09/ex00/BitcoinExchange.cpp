#include "BitcoinExchange.h"
#include "Date.h"
#include <cmath>
#include <cstddef>
#include <fstream>
#include <string>

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& be)
{
	*this = be;
}

BitcoinExchange::BitcoinExchange(const std::string& file)
{
	std::string		line;
	std::ifstream	infile(file.c_str());

	if (infile.is_open()) {
		std::getline(infile, line);
		while (infile) {
			std::getline(infile, line);
			if (line[0] != 0)
				add_date(line);
		}
	} else {
		std::cerr << "Error: could not open file\n";
	}
	std::cout << "Total entries: " << prices.size() << std::endl;
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

void	BitcoinExchange::add_date(const std::string& line)
{
	size_t	i = 0;
	std::string	date_str;
	std::string	price_str;
	Date		date;
	double		price;

	while (line[i] && line[i] != ',')
		i++;
	if (line[i] == 0)
		return; // TODO throw error
	date_str = line.substr(0, i);
	price_str = line.substr(i + 1);
	date = Date(date_str);
	price = std::atof(price_str.c_str());
	if (price < 0 || price > 1000)
		return; // TODO throw error
	if (prices.empty()) {
		min_date = date;
		max_date = date;
	} else {
		min_date = std::min(min_date, date);
		max_date = std::max(max_date, date);
	}
	insert_price(std::pair<Date, double>(date, price));
	// TODO throw err if not good
}

void	BitcoinExchange::compute_price(const std::string& line) const
{
	Date	date;
	double	amount;
	double	price;
	size_t	pos;

	pos = line.find(" | ");
	if (pos == std::string::npos) {
		std::cerr << "Error: bad input: '" << line << "'\n";
		return;
	}
	date = Date(line.substr(0, pos)); // TODO handle wrong date error
	amount = std::atof(line.substr(pos + 3).c_str());
	if (amount < 0) {
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
	if (price * amount > 9999999999)
		std::cerr << "Error: too large a number\n";
	else
		std::cout << date.get_year() << "-" << date.get_month() << "-" << date.get_day() << " => " << amount << " = " << price * amount << std::endl;
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
