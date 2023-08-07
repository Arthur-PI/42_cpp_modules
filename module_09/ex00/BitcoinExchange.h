#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>

#include "Date.h"

class	BitcoinExchange {
	public:
		// *** Constructors ***
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& be);
		BitcoinExchange& operator=(const BitcoinExchange& be);
		BitcoinExchange(const std::string& file);
		~BitcoinExchange(void);

		void	compute_prices(const std::string& file) const;
		void	add_date(const std::string& line);

	private:
		Date									  min_date;
		Date									  max_date;
		std::map<Date, double>	prices;

		// ** private functions ***
		void	parse_file(void);
		void	compute_price(const std::string& line) const;
		void	insert_price(std::pair<Date, double> line);
};

bool	is_valid_file(const std::string& file);
