#pragma once

#include "Enumerator.h"

/// <summary>
/// The class BreadthFirstEnum describes the object of BreadthFirst enumerator
/// </summary>
template<TaskConcept T>
class BreadthFirstRecursiveEnum : public Enumerator<T>
{
public:

	/// <summary>
	/// 
	/// </summary>
	/// <param name="MysTask"></param>
	BreadthFirstRecursiveEnum(T MysTask);

	/// <summary>
	/// initializes u:v and c.
	/// </summary>
	void start() override;

	/// <summary>
	/// does one step in the problem space according to the BreadthFirst traversal.
	/// </summary>
	void next() override;

	/// <summary>
	/// checks the value of over ow digit c.
	/// </summary>
	/// <returns></returns>
	bool end() override;

	/// <summary>
	/// is BreadthFirst ?
	/// </summary>
	/// <returns></returns>
	bool is_BreadthFirst();

protected:

	/// <summary>
	/// c that is the overflow digit of the BreadthFirst process, Its value 1 indicates the end of the traversal.
	/// </summary>
	bool c;
};

#include "BreadthFirsRecursiveEnum.cpp"