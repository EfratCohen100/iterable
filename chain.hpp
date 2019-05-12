#pragma once
#include "range.hpp"

namespace itertools
{
template <typename T,typename U>
class chain
{

private:

    T beginT;
    T endT;
    U beginU;
    U endU;


    // T _container1;
    // T _container2;
    // chain(T container1, T container2);
    // T begin(T start1, T start2);
    // T end(T stop1, T stop2);


  public:
	chain(T beginT,T endT,U beginU, U endU)
	{
		this->beginT = beginT;
		this->endT = endT;
        this->beginU = beginU;
		this->endU = endU;
	}

    chain<T,U>(T typeT,U typeU)
    
        :beginT=typeT;
        beginU=typeU;
    

	class iterator
	{
	  public:

		T *iterBeginT;
        T *iterEndT;
        U *iterBeginU;
        U *iterEndU;

// 		iterator(T *_iter = nullptr) : _iter(_iter) {}

// 		T &operator*() const
// 		{
// 			return *_iter;
// 		}

// 		T *operator->() const
// 		{
// 			return &(_iter);
// 		}

		// ++i;
		iterator &operator++()
		{
            if(*iterBeginT != *iterEndT)
            {
                ++(*iterBeginT);
            }
            else
            {
               ++(*iterBeginU);
            }
			return *this;
		}

// 		// i++;
// 		// Usually iterators are passed by value and not by const& as they are small.
// 		const iterator operator++(int)
// 		{
// 			iterator tmp = *this;
// 			(*_iter)++;
// 			return tmp;
// 		}

// 		bool operator==(const iterator &rhs) const
// 		{
// 			return (*_iter) == (*rhs._iter);
// 		}

// 		bool operator!=(const iterator &rhs) const
// 		{
// 			return (*_iter) != (*rhs._iter);
// 		}
 	};

//   public:
// 	iterator begin()
// 	{
// 		return iterator{&_begin};
// 	}

// 	iterator end()
// 	{
// 		return iterator{&_end};
// 	}




};
}