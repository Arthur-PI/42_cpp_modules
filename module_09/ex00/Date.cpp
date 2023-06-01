#include "Date.h"
#include <cctype>
#include <sstream>

Date::Date(void)
{
	year = 0;
	month = 1;
	day = 1;
}

Date::Date(const Date& date)
{
	*this = date;
}

// year-month-day
Date::Date(const std::string& date)
{
	std::istringstream	date_stream(date);
	char				sep1, sep2;

	date_stream >> year >> sep1 >> month >> sep2 >> day;
	// std::cout << date << std::endl;
	if (date_stream.fail()) {
		std::cout << "Exit 1\n";
		throw InvalidDate();
	}
	if (date_stream.bad()) {
		std::cout << "Exit 2\n";
		throw InvalidDate();
	}
	if (sep1 != '-') {
		std::cout << "Exit 3\n";
		throw InvalidDate();
	}
	if (sep2 != '-') {
		std::cout << "Exit 4\n";
		throw InvalidDate();
	}
	if (date_stream.peek() != -1) {
		std::cout << "Exit 5\n";
		throw InvalidDate();
	}
	if (month == 0 || month > 12) {
		std::cout << "Exit 6\n";
		throw InvalidDate();
	}
	if (day == 0 || day > get_nb_days(month)) {
		std::cout << "Exit 7\n";
		throw InvalidDate();
	}
}

Date&	Date::operator=(const Date& date)
{
	if (this != &date) {
		year = date.year;
		month = date.month;
		day = date.day;
	}
	return *this;
}

Date::~Date(void) {}

size_t	Date::get_nb_days(size_t m) const
{
	size_t	nb_days;

	nb_days = 30;
	if (m > 7)
		m--;
	if (m % 2)
		nb_days = 31;
	if (m == 2) {
		if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
			nb_days = 29;
		else
			nb_days = 28;
	}
	return nb_days;
}

size_t	Date::get_year(void) const
{ return year; }

size_t	Date::get_month(void) const
{ return month; }

size_t	Date::get_day(void) const
{ return day; }

Date&	Date::operator++(void)
{
	day++;
	if (day > get_nb_days(month)) {
		day = 1;
		month++;
	}
	if (month > 12) {
		month = 1;
		year++;
	}
	return *this;
}

Date&	Date::operator--(void)
{
	day--;
	if (day == 0) {
		month--;
		day = get_nb_days(month == 0 ? 12 : month);
	}
	if (month == 0) {
		month = 12;
		year--;
	}
	return *this;
}

Date	Date::operator++(int)
{
	Date	tmp;

	tmp = *this;
	++(*this);
	return tmp;
}

Date	Date::operator--(int)
{
	Date	tmp;

	tmp = *this;
	--(*this);
	return tmp;
}

bool	operator==(const Date& d1, const Date& d2)
{ return d1.get_year() == d2.get_year() && d1.get_month() == d2.get_month() && d1.get_day() == d2.get_day(); }

bool	operator!=(const Date& d1, const Date& d2)
{ return !(d1 == d2); }

bool	operator<(const Date& d1, const Date& d2)
{
	if (d1.get_year() < d2.get_year())
		return true;
	if (d1.get_year() > d2.get_year())
		return false;
	if (d1.get_month() < d2.get_month())
		return true;
	if (d1.get_month() > d2.get_month())
		return false;
	if (d1.get_day() < d2.get_day())
		return true;
	return false;
}

bool	operator<=(const Date& d1, const Date& d2)
{ return !(d2 < d1); }

bool	operator>(const Date& d1, const Date& d2)
{ return d2 < d1; }

bool	operator>=(const Date& d1, const Date& d2)
{ return !(d1 < d2); }
