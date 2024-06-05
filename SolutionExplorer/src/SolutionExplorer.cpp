#pragma once
#include "SolutionExplorer.h"

template<TaskConcept T>
SolutionExplorer<T>::SolutionExplorer(AlgoTypes Algo, T MyTask)
{
	this->Algo = Algo;

	switch (this->Algo)
	{
	case AlgoTypes::DFS_Iterative:

		this->s = std::make_shared<DepthFirstLinSearch<T>>(MyTask);

		break;

	case AlgoTypes::DFS_Recursive:

		this->s = std::make_shared<DepthFirstRecursiveLinSearch<T>>(MyTask);

		break;

	case AlgoTypes::BFS_Iterative:

		this->s = std::make_shared<BreadthFirstLinSearch<T>>(MyTask);

		break;

	case AlgoTypes::BFS_Recursive:

		this->s = std::make_shared<BreadthFirstRecursiveLinSearch<T>>(MyTask);

		break;

	default:

		this->s = nullptr;
	}
}

template<TaskConcept T>
void SolutionExplorer<T>::run()
{
	this->s->run();
}

template<TaskConcept T>
bool SolutionExplorer<T>::found()
{
	return false;
}

template<TaskConcept T>
std::shared_ptr<T> SolutionExplorer<T>::elem()
{
	return this->s->elem();
}
