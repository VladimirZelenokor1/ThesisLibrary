#include "GraphColoring.h"
#include <iostream>
#include <algorithm>


bool GraphColoring::rho(const int i)
{
	if (!graphColoringUtil(i))
	{
		return true;
	}
	else
	{
		color[i] = 0;
	}

	return false;
}

std::pair<bool, const int> GraphColoring::correct(const int ind)
{
	bool l = true;

	int i = ind;

	for (i; l && i < n; ++i)
	{
		l = this->rho(i);
	}

	return std::make_pair(l, i - 1);
}

bool GraphColoring::isSafe(const int v, int c)
{
	for (int i = 0; i < this->n; ++i)
	{
		if (graph[v][i] && c == color[i])
		{
			return false;
		}	
	}
		
	return true;
}

bool GraphColoring::graphColoringUtil(const int v)
{
	for (int c = 1; c <= this->o; ++c)
	{
		if (isSafe(v, c))
		{
			color[v] = c;
		}
	}

	return false;
}

void GraphColoring::print()
{
	for (int i = 0; i < this->n; i++)
	{
		std::cout << " " << color[i] << " ";
	}
		
	std::cout << std::endl;
}
