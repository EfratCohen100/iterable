#pragma once





namespace itertools

{

template <typename T>



class powerset

{

   private:

	T _begin;

  public:

	powerset(T _begin):_begin(_begin) {}


	class const_iterator

	{

	  private:

		typename T::const_iterator _iter ;



    public:

		const_iterator(typename T::const_iterator _iter ) : _iter(_iter) {}



		auto operator*() const

		{

		std::set<int> first;
		return first;
		}



		const_iterator &operator++()

		{

			return *this;

		}



		// i++;

		// Usually const_iterators are passed by value and not by const& as they are small.

		const const_iterator operator++(int)

		{

			const_iterator tmp = *this;

			(_iter)++;

			return tmp;

		}



		bool operator==(const const_iterator &rhs) const

		{

			return false;

		}



		bool operator!=(const const_iterator &rhs) const

		{

			return false;

		}

	};



public:

	const_iterator begin() const

	{

		return powerset<T>::const_iterator(_begin.begin());

	}



	const_iterator end() const

	{

		return  powerset<T>::const_iterator(_begin.end());

	}





};



}

template <typename U>
std::ostream &operator<<(std::ostream &os, const std::set<U> &S)
{
    
    return os;
}
