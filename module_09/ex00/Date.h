#pragma once

#include <cstddef>
#include <iostream>
#include <cstddef>
#include <limits>

class Date {
	public:
		// *** Constructor ***
		Date(void);
		Date(const Date& date);
		Date(const std::string& date);
		Date&	operator=(const Date& date);
		~Date(void);

		// *** Operators ***
		Date&	operator++(void);
		Date&	operator--(void);
		Date	operator++(int);
		Date	operator--(int);

		// *** Getters ***
		size_t	get_year(void) const;
		size_t	get_month(void) const;
		size_t	get_day(void) const;

		// *** Exceptions ***
		struct InvalidDate: public std::runtime_error {
			InvalidDate(void): std::runtime_error("the date is invalid") {}
			InvalidDate(std::string& m): std::runtime_error("the date is invalid, " + m) {}
		};
		

	private:
		size_t	year;
		size_t	month;
		size_t	day;

		// *** private functions ***
		size_t	get_nb_days(size_t m) const;
};

bool	operator==(const Date& d1, const Date& d2);
bool	operator!=(const Date& d1, const Date& d2);
bool	operator<(const Date& d1, const Date& d2);
bool	operator<=(const Date& d1, const Date& d2);
bool	operator>(const Date& d1, const Date& d2);
bool	operator>=(const Date& d1, const Date& d2);
