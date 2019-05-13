#pragma once

namespace itertools
{
template <typename T, typename U>
class chain
{

private:
private:
	T c1;
	U c2;

public:
	chain(T c1, U c2) : c1(c1) , c2(c2) {}

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

public:
	iterator begin()
	{
		return chain<T,U>::iterator(c1.begin(), c2.begin());
	}

	iterator end()
	{
		return  chain<T,U>::iterator(c1.end(), c2.end());
	}
};
} // namespace itertools
