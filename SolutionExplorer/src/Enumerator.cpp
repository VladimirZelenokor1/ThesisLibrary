#pragma once
#include "Enumerator.h"

template<TaskConcept T>
Enumerator<T>::Enumerator(T MyTask)
{
	this->u = std::make_shared<T>();

	this->ind = 0;
}

template<TaskConcept T>
int Enumerator<T>::getInd()
{
	return this->ind;
}

template<TaskConcept T>
void Enumerator<T>::setInd(int ind)
{
	this->ind = ind;
}

template<TaskConcept T>
std::shared_ptr<T> Enumerator<T>::getTask()
{
	return this->u;
}

template<TaskConcept T>
void Enumerator<T>::start()
{
	/**/
}

template<TaskConcept T>
void Enumerator<T>::next()
{
	/**/
}

template<TaskConcept T>
bool Enumerator<T>::end()
{
	return false;
}

template<TaskConcept T>
std::shared_ptr<T> Enumerator<T>::current()
{
	return this->u;
}
