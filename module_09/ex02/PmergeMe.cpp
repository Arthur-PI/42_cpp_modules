#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _list_vec(), _list_deque(), _time_vec(), _time_deque() {}


static bool	is_valid_number(const char* s)
{
	size_t	i;

	i = 0;
	while (s && s[i] && (s[i] == ' ' || s[i] == '\t'))
		i++;
	while (s && s[i] && std::isdigit(s[i]))
		i++;
	return i < 10 && s[i] == 0;
}

PmergeMe::PmergeMe(char** numbers): _list_vec(), _list_deque(), _time_vec(), _time_deque()
{
	size_t		i;
	size_t		number;

	i = 0;
	while (numbers && numbers[i]) {
		if (!is_valid_number(numbers[i])) {
			std::cerr << "Error: invalid number in list: '" << numbers[i] << "'\n";
			exit(1);
		}
		number = std::atol(numbers[i]);
		_list_vec.push_back(number);
		_list_deque.push_back(number);
		i++;
	}
	// std::cout << "All good, list parsed with " << _list_vec.size() << " elements\n";
}

PmergeMe::PmergeMe(const PmergeMe& other)
: _list_vec(other._list_vec), _list_deque(other._list_deque),
_time_vec(other._time_vec), _time_deque(other._time_deque) {}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other) {
		_list_vec = other._list_vec;
		_list_deque = other._list_deque;
		_time_vec = other._time_vec;
		_time_deque = other._time_deque;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::sort()
{
	std::cout << "Before: ";
	for (size_t i=0; i < _list_vec.size(); i++)
		std::cout << " " << _list_vec[i];
	_sort_vec(0, _list_vec.size());
	std::cout << std::endl;
}

void	PmergeMe::_sort_vec(size_t start, size_t end)
{
	size_t	len = end - start;
	if (len < INSERT_TRESHOLD) {
		_insertion_sort_vec(start, end);
	} else {
		size_t	middle_len = len / 2;
		_sort_vec(start, start + middle_len);
		_sort_vec(start + middle_len + 1, end);
		_merge_vec(start, start + middle_len, end);
	}
}

void	_merge_vec(size_t start, size_t middle, size_t end)
{
	(void)start;
	(void)middle;
	(void)end;
}

void	_insertion_sort_vec(size_t start, size_t end)
{
	(void)start;
	(void)end;
}
