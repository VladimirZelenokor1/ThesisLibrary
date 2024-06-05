#pragma once
#include "DepthFirstEnum.h"

template<TaskConcept T>
DepthFirstEnum<T>::DepthFirstEnum(T MyTask)
	: Enumerator<T>(MyTask)
{
	/**/
}

template<TaskConcept T>
void DepthFirstEnum<T>::start()
{
	(this->u->n < 1 ? this->ind = 0 : this->ind = 1);
}

template<TaskConcept T>
void DepthFirstEnum<T>::next()
{
	if ((this->ind <= this->u->n) && (this->u->rho(this->ind - 1)))
	{
		this->ind += 1;
	}
	else
	{
		if (this->ind > this->u->n)
		{
			this->ind -= 1; 
		}

		while ((this->ind > 1) && (this->u->v[this->ind - 1] == this->u->m[this->ind - 1] - 1))
		{
			this->u->v[this->ind - 1] = 0;

			this->ind -= 1;
		}

		if (this->ind >= 1)
		{
			this->u->v[this->ind - 1] += 1;
		}
	}
}

template<TaskConcept T>
bool DepthFirstEnum<T>::end()
{
	return (this->ind == 0);
}

template<TaskConcept T>
bool DepthFirstEnum<T>::is_depthfirst()
{
	return true;
}