#pragma once
#include "LinearSearch.h"

template<TaskConcept T>
LinearSearch<T>::LinearSearch(T MyTask)
{
	this->t = std::make_shared<Enumerator<T>>(MyTask);
}

template<TaskConcept T>
void LinearSearch<T>::run()
{
	/**/
}

template<TaskConcept T>
bool LinearSearch<T>::found()
{
	return false;
}

template<TaskConcept T>
std::shared_ptr<T> LinearSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool LinearSearch<T>::cond()
{
	return false;
}