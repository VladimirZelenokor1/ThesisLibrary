#pragma once

#include "LinearSearch.h"
#include "BreadthFirstEnum.h"

template<TaskConcept T>
class BreadthFirstLinSearch : public LinearSearch<T>
{
public:
	
	BreadthFirstLinSearch(T MyTask);

	/// <summary>
	/// 
	/// </summary>
	void run() override;

//protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<T> elem() override;
	
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond() override;

};

#include "BreadthFirstLinSearch.cpp"