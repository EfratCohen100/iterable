#pragma once





namespace itertools

{

template <typename T>



class powerset

{



   private:

	T _begin;



  public:

	

	powerset <T> (T _begin):_begin(_begin) {}





	class iterator

	{

	  private:

		typename T::iterator _iter ;



    public:

		iterator(typename T::iterator _iter ) : _iter(_iter) {}



		auto operator*() const

		{

			

				return *_iter;

			

		}



		// auto *operator-> () const

		// {

		

		// 		return &_iter;

		

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

			iterator tmp = *this;

			(_iter)++;

			return tmp;

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

		return powerset<T>::iterator(_begin.begin());

	}



	iterator end()

	{

		return  powerset<T>::iterator(_begin.end());

	}





};



};
