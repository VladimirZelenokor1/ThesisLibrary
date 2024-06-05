#pragma once

#include "DepthFirstLinSearch.h"
#include "DepthFirstRecursiveLinSearch.h"
#include "BreadthFirstLinSearch.h"
#include "BreadthFirstRecursiveLinSearch.h"


/// <summary>
/// 
/// </summary>
enum AlgoTypes
{
	DFS_Iterative = 1,
	DFS_Recursive = 2,
	BFS_Iterative = 3,
	BFS_Recursive = 4
};


template<TaskConcept T>
class SolutionExplorer
{
public:

	/// <summary>
	/// 
	/// </summary>
	SolutionExplorer(AlgoTypes Algo, T MyTask);

	/// <summary>
	/// 
	/// </summary>
	void run();

	/// <summary>
	/// gives the result of the search.
	/// </summary>
	/// <returns></returns>
	bool found();

	/// <summary>
	/// gives the result of the search.
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<T> elem();

protected:

	/// <summary>
	/// 
	/// </summary>
	std::shared_ptr<LinearSearch<T>> s;

private:

	/// <summary>
	/// 
	/// </summary>
	AlgoTypes Algo;
};

#include "SolutionExplorer.cpp"