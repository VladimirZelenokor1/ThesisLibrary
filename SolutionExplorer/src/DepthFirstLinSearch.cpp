#pragma once
#include "DepthFirstLinSearch.h"

template<TaskConcept T>
DepthFirstLinSearch<T>::DepthFirstLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	this->t = std::make_shared<DepthFirstEnum<T>>(MyTask);
}

template<TaskConcept T>
void DepthFirstLinSearch<T>::run()
{
	bool l = false;

	std::shared_ptr<T> u = nullptr;

	this->t->start();

	while (!l && !this->t->end())
	{
		u = this->t->current();

		l = (this->t->getInd() > u->n);

		this->t->next();
	}
}

template<TaskConcept T>
std::shared_ptr<T> DepthFirstLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool DepthFirstLinSearch<T>::cond()
{
	return false;
}