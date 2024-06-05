#pragma once
//https://youtu.be/052VkKhIaQ4
//https://www.geeksforgeeks.org/graph-coloring-applications/
#include <vector>


class GraphColoring
{
public:

	const int n = 4;

	const int o = 3;

	std::vector<int> v{ std::vector<int>(n, 0) };

	const std::vector<int> m{ std::vector<int>(n, n) };

	inline bool rho(const int i);

	std::pair<bool, const int> correct(const int ind);

	std::vector<std::vector<bool>> graph{
		{ 0, 1, 1, 1 },
		{ 1, 0, 1, 0 },
		{ 1, 1, 0, 1 },
		{ 1, 0, 1, 0 },
	};
					
	std::vector<int> color{ std::vector<int>(n, 0) };

	bool isSafe(const int v, int c);

	bool graphColoringUtil(const int v);

	void print();
};

