#pragma once
#include "range.hpp"


namespace itertools
{
template <typename T,typename U>

class product
{
private:
	T c1;
	U c2;

public:
	product(T c1, U c2) : c1(c1) , c2(c2) {}

	class iterator
	{

	private:
		typename T::iterator itr1;
		typename U::iterator itr2;

		

	public:
		iterator(typename T::iterator itr1, typename U::iterator itr2) : itr1(itr1) , itr2(itr2) {}

		auto &operator*() const
		{
			
				return *itr1;
			
		}

		// auto *operator-> () const
		// {
		
		// 		return &itr1;
		
		// }

		// ++i;
		iterator &operator++()
		{
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator operator++(int)
		{
			return *this;
		}

		bool operator==(const iterator &rhs) const
		{
			return false;
		}

		bool operator!=(const iterator &rhs) const
		{
			return false;
		}
	};

class const_iterator
	{
private:
		typename T::iterator itr1;
		typename U::iterator itr2;

		
	public:
		const_iterator(typename T::iterator itr1, typename U::iterator itr2) : itr1(itr1) , itr2(itr2) {}
		const auto &operator*() const

		{

			return *itr1;
		}

		const_iterator &operator++()

		{

			return *this;
		}

		bool operator!=(const const_iterator &other) const
		{
			return false;
		}


	};

public:
	iterator begin()
	{
		return product<T,U>::iterator(c1.begin(), c2.begin());
	}

	iterator end()
	{
		return  product<T,U>::iterator(c1.end(), c2.end());
	}

	const_iterator begin() const {
		return product<T,U>::const_iterator(c1.begin(), c2.begin());


	}

	const_iterator end() const {
		return  product<T,U>::const_iterator(c1.end(), c2.end());

		
	}


};
};
