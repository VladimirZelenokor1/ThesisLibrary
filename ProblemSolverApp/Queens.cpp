
#include "Queens.h"
#include <iostream>

bool Queens::rho(const int i)
{
	bool l = false;

	for (int j = 0; j < n && !l; ++j)
	{
		if (safe(j, i))
		{
			this->board[j][i] = 1;

			l = true;
		}
		else
		{
			this->board[j][i] = 0;
		}
	}

	return l;
}

std::pair<bool, const int> Queens::correct(const int ind)
{
	bool l = true;

	int i = ind;

	for (i; l && i < n; ++i)
	{
		l = this->rho(i);
	}

	return std::make_pair(l, i - 1);
}

bool Queens::safe(const int row, const int col)
{
	// Check this row on left side
	for (int j = 0; j < this->n; ++j)
	{
		if (this->board[row][j])
		{
			return false;
		}
	}

	// Check upper diagonal on left 
	for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
	{
		if (this->board[i][j])
		{
			return false;
		}
	}

	// Check lower diagonal on left side
	for (int i = row, j = col; i < this->n && j >= 0; ++i, --j)
	{
		if (i >= 0 && i < this->n && j >= 0 && j < this->n)
		{
			if (this->board[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

void Queens::print()
{
	for (int k = 0; k < n; ++k)
	{
		for (int l = 0; l < n; ++l)
		{
			std::cout << board[k][l] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
	{
		std::cout << v[i] << " ";
	}
}
