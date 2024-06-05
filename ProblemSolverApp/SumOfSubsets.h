#pragma once
#include <vector>



class SumOfSubsets
{
public:

	const int n = 6;

	const int sum = 16;

	std::vector<int> v{ std::vector<int>(n, 0) };

	std::vector<int> m{ std::vector<int>(n, 2) };

	bool rho(const int i);

	std::pair<bool, int> correct(int ind);

	std::vector<int> set{ 17, 5, 7, 15, 3, 8 };

	std::vector<int> res{ std::vector<int>(n, 0)};

	void print();
};

