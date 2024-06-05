#pragma once
#include "BreadthFirsRecursiveEnum.h"

template<TaskConcept T>
BreadthFirstRecursiveEnum<T>::BreadthFirstRecursiveEnum(T MysTask)
	: Enumerator<T>(MysTask)
{
	c = false;
}

template<TaskConcept T>
void BreadthFirstRecursiveEnum<T>::start()
{
	this->ind = 0;

	c = false;
}

template<TaskConcept T>
void BreadthFirstRecursiveEnum<T>::next()
{
	c = true;

	while (c && (this->ind <= this->u->n))
	{
		if ((this->u->v[this->ind]) < (this->u->m[this->ind] - 1))
		{
			this->u->v[this->ind] += 1;

			c = false;

			assert(this->ind >= 0);
		}
		else
		{
			this->u->v[this->ind] = 0;

			if (this->ind > 0) this->ind -= 1;

			assert(this->ind >= 0);
		}
	}

	assert(this->ind < this->u->n);
}

template<TaskConcept T>
bool BreadthFirstRecursiveEnum<T>::end()
{
	return c;
}

template<TaskConcept T>
bool BreadthFirstRecursiveEnum<T>::is_BreadthFirst()
{
	return true;
}