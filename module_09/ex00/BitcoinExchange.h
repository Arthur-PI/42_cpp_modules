#include <iostream>
#include <unordered_map>

class	BitcoinExchange {
	public:
		// *** Constructors ***
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& be);
		BitcoinExchange& operator=(const BitcoinExchange& be);
		BitcoinExchange(const std::string& file);
		~BitcoinExchange(void);

		class Date {
			public:

			private:
				
		};

		void	compute_prices(const std::string& file);

	private:
		Date								min_date;
		Date								max_date;
		std::unordered_map<Date, double>	prices;
};

bool	is_valid_file(const std::string& file);
