#include "SumOfSubsets.h"
#include <iostream>
#include <algorithm>


bool SumOfSubsets::rho(const int ind)
{
	bool l = false;

	int s = 0;

	print();

	for (int i = 0; i < this->n; ++i)
	{
		if (this->res[i])
		{
			s += this->set[i];
		}
	}

	if (((s + this->set[ind]) <= this->sum))
	{
		l = true;

		this->res[ind] = true;
	}
	else
	{
		l = false;

		this->res[ind] = false;
	}

	return l;
}

std::pair<bool, int> SumOfSubsets::correct(int ind)
{
	bool l = true;

	int i = ind;

	for (i; l && i < n; ++i)
	{
		l = this->rho(i);
	}

	ind = i - 1;

	return std::make_pair(l, ind);
}


void SumOfSubsets::print()
{
    for (int i = 0; i < this->n; ++i)
    {
        std::cout << this->res[i] << " ";
    }

    std::cout << std::endl;
}

