#pragma once
//https://www.youtube.com/watch?v=xFv_Hl4B83A
#include <vector>


class Queens
{
public:

	const int n = 4;

	std::vector<int> v{ std::vector<int>(n, 0) };

	const std::vector<int> m{ std::vector<int>(n, n) };

	inline bool rho(const int i);

	std::pair<bool, const int> correct(const int ind);

	std::vector<std::vector<bool>> board { std::vector<std::vector<bool>>(n, std::vector<bool>(n, false)) };

	bool safe(const int row, const int col);

	void print();
};