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

	class const_iterator
	{

	private:
		typename T::const_iterator itr1;
		typename U::const_iterator itr2;
		typename U::const_iterator itr2_begin;
		typename U::const_iterator itr2_end;

	public:
		const_iterator(typename T::const_iterator itr1, typename U::const_iterator itr2, typename U::const_iterator itr2_end) : itr1(itr1), itr2(itr2), itr2_begin(itr2), itr2_end(itr2_end) {}

		auto operator*() const
		{

			return pair<decltype(*itr1), decltype(*itr2)>(*itr1, *itr2);
		}

		const_iterator &operator++()
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

		bool operator!=(const const_iterator &rhs) const
		{
			return (itr1 != rhs.itr1);
		}
	};

public:
	const_iterator begin() const 
	{
		return product<T, U>::const_iterator(c1.begin(), c2.begin(), c2.end());
	}

	const_iterator end() const 
	{
		return product<T, U>::const_iterator(c1.end(), c2.end(), c2.end());
	}
};
}; // namespace itertools
