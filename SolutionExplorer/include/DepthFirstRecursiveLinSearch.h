
#pragma once

#include "LinearSearch.h"

/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
template<TaskConcept T>
class DepthFirstRecursiveLinSearch : public LinearSearch<T>
{
public:

	/// <summary>
	/// 
	/// </summary>
	/// <param name="MyTask"></param>
	DepthFirstRecursiveLinSearch(T MyTask);


	/// <summary>
	/// 
	/// </summary>
	void run();


	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<T> elem();


	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	void recursive_func();

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond();
};

#include "DepthFirstRecursiveLinSearch.cpp"