#pragma once
#include "range.hpp"

namespace itertools
{
template <typename T, typename U>

class product
{
private:
	T c1;
	U c2;

public:
	product(T c1, U c2) : c1(c1), c2(c2) {}

	class iterator
	{

	private:
		typename T::iterator itr1;
		typename U::iterator itr2;
		typename U::iterator itr2_begin;
		typename U::iterator itr2_end;

	public:
		iterator(typename T::iterator itr1, typename U::iterator itr2, typename U::iterator itr2_end) : itr1(itr1), itr2(itr2), itr2_begin(itr2), itr2_end(itr2_end) {}

		auto operator*() const
		{

			return pair<decltype(*itr1), decltype(*itr2)>(*itr1, *itr2);
		}

		iterator &operator++()
		{
			if (!(itr2 != itr2_end))
			{
				itr2 = itr2_begin;

				++itr1;
			}
			else
			{
				++itr2;
				if (!(itr2 != itr2_end)) // check again 
				{
					itr2 = itr2_begin;

					++itr1;
				}
			}

			return *this;
		}

		bool operator!=(const iterator &rhs) const
		{
			return (itr1 != rhs.itr1);
		}
	};

public:
	iterator begin()
	{
		return product<T, U>::iterator(c1.begin(), c2.begin(), c2.end());
	}

	iterator end()
	{
		return product<T, U>::iterator(c1.end(), c2.end(), c2.end());
	}
};
}; // namespace itertools
