#pragma once

#include <memory>
#include <cassert>
#include <concepts>
#include <vector>
#include <utility>



template<class T>
concept TaskConcept = requires(T t) 
{
	{ T::n } -> std::convertible_to<const int>;
	{ t.v.size() } -> std::same_as<std::size_t>;
	{ t.m.size() } -> std::same_as<std::size_t>;
	{ t.v } -> std::ranges::input_range;
	{ t.m } -> std::ranges::input_range;
	{ t.rho(std::declval<const int>()) } -> std::convertible_to<bool>;
	{ t.correct(std::declval<int>()) } -> std::convertible_to<std::pair<bool, int>>;
};


template<TaskConcept T>
class Enumerator
{
public:

	/// <summary>
	/// 
	/// </summary>
	Enumerator(T MyTask);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	int getInd();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="ind"></param>
	void setInd(int ind);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<T> getTask();

	/// <summary>
	/// 
	/// </summary>
	virtual void start();

	/// <summary>
	/// 
	/// </summary>
	virtual void next();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual bool end();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<T> current();

//protected:

	/// <summary>
	/// 
	/// </summary>
	int ind;

	/// <summary>
	/// 
	/// </summary>
	std::shared_ptr<T> u;
};

#include "Enumerator.cpp"