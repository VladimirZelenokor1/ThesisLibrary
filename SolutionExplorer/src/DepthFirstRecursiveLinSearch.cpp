#pragma once
#include "DepthFirstRecursiveLinSearch.h"
#include "DepthFirstEnum.h"
#include "DepthFirstRecursiveEnum.h"

template<TaskConcept T>
DepthFirstRecursiveLinSearch<T>::DepthFirstRecursiveLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	this->t = std::make_shared<DepthFirstRecursiveEnum<T>>(MyTask);
}

template<TaskConcept T>
void DepthFirstRecursiveLinSearch<T>::run()
{
	this->t->start();

	recursive_func();
}

template<TaskConcept T>
std::shared_ptr<T> DepthFirstRecursiveLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool DepthFirstRecursiveLinSearch<T>::cond()
{
	return false;
}

template<TaskConcept T>
void DepthFirstRecursiveLinSearch<T>::recursive_func()
{
	bool l = (this->t->getInd() > this->t->u->n);

	if (!l && !this->t->end())
	{
		this->t->next();

		recursive_func();
	}
}

