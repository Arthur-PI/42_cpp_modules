#include "PmergeMe.hpp"
#include <algorithm>
#include <cstddef>
#include <vector>

template<typename T>
std::vector<T>	merge(std::vector<T> v1, std::vector<T> v2)
{
	
}

template<typename T = std::size_t>
std::vector<T>	merge_sort(std::vector<T>& arr)
{
	if (arr.size() == 1)
		return arr;
	std::vector<T> new1 = merge_sort(std::vector<T>(arr.begin(), arr.begin() + arr.size() / 2));
	std::vector<T> new2 = merge_sort(std::vector<T>(arr.begin() + arr.size() / 2, arr.end()));
	arr = merge(new1, new2);
}
