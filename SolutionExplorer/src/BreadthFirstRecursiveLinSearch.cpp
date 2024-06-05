#pragma once
#include "BreadthFirstRecursiveLinSearch.h"

template<TaskConcept T>
BreadthFirstRecursiveLinSearch<T>::BreadthFirstRecursiveLinSearch(T MysTask)
	: LinearSearch<T>(MysTask)
{
	this->t = std::make_shared<BreadthFirstRecursiveEnum<T>>(MysTask);
}

template<TaskConcept T>
void BreadthFirstRecursiveLinSearch<T>::run()
{
	this->t->start();

	recursive_func();
}


template<TaskConcept T>
void BreadthFirstRecursiveLinSearch<T>::recursive_func()
{
	std::pair<bool, int> p = this->t->u->correct(this->t->getInd());

	bool l = p.first;

	if (!l && !this->t->end())
	{
		int ind = p.second;

		this->t->setInd(ind);

		this->t->next();

		recursive_func();
	}
}


template<TaskConcept T>
std::shared_ptr<T> BreadthFirstRecursiveLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool BreadthFirstRecursiveLinSearch<T>::cond()
{
	return this->t->end();
}

