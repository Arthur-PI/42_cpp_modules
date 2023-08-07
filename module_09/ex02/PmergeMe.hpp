#pragma once

#include <vector>
#include <deque>
#include <cctype>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include "PmergeMe.hpp"

#define INSERT_TRESHOLD 40

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(char** numbers);
	PmergeMe(const PmergeMe& merge);
	PmergeMe&	operator=(const PmergeMe& merge);
	~PmergeMe();

	void	sort();

private:
	std::vector<size_t>	_list_vec;
	std::deque<size_t>	_list_deque;
	double				_time_vec;
	double				_time_deque;
	
	void	_insertion_sort_vec(size_t start, size_t end);
	void	_sort_vec(size_t start, size_t end);
	void	_merge_vec(size_t start, size_t middle, size_t end);

	void	_insertion_sort_deque(size_t start, size_t end);
	void	_sort_deque(size_t start, size_t end);
	void	_merge_deque(size_t start, size_t middle, size_t end);
};