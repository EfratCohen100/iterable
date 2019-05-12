#pragma once
#include "range.hpp"


namespace itertools
{
template <typename T,typename U>

class product
{
private:

    T beginT;
    T endT;
    U beginU;
    U endU;

  public:
	// product(T beginT,T endT,U beginU, U endU)
	// {
	// 	this->beginT = beginT;
	// 	this->endT = endT;
  //       this->beginU = beginU;
	// 	this->endU = endU;
	// }

product<T,U>(T typeT,U typeU) : beginT(typeT) , beginU(typeU){}
    

	class iterator
	{
	  
		private:
      typename T::iterator iterBeginT;
      typename T::iterator iterEndT;
      typename U::iterator iterBeginU;
      typename U::iterator iterEndU;

				public:

		iterator(typename T::iterator iter1BeginT,typename T::iterator iter1EndT, typename U::iterator iter2BeginU,typename U::iterator iter2EndU)
		 : iterBeginT(iter1BeginT),iterEndT(iter1EndT),iterBeginU(iter2BeginU),iterEndU(iter2EndU) {}

		T &operator*() const/////////////////////////////////////////////////////////////////////////////////
		{
			return iterBeginT;
		}

		T *operator->() const//////////////////////////////////////////////////////////////////////////////////
		{
			return &(iterBeginT);
		}

		// ++i;
		iterator &operator++()
		{
            // if(*iterBeginT != *iterEndT)
            // {
            //     ++(*iterBeginT);
            // }
            // else
            // {
            //    if(*iterBeginU != *iterEndU)
            //    ++(*iterBeginU);
            // }
			return *this;
		}

 		// i++;
		const iterator operator++(int)//////////////////////////////////////////////////////////////////
		{
			iterator tmp = *this;
			(iterBeginT)++;
			return tmp;
		}

		bool operator==(const iterator &rhs) const
		{
			return true;
		}

		bool operator!=(const iterator &rhs) const  //////////////////////////////////////////////////////////////
		{
			return true;
		}
 	};

  public:
	iterator begin()
	{
		return product<T,U>::iterator{beginT};////////////////////////////////////////////////////////
	}

	iterator end()
	{
		return product<T,U>::iterator{endU};///////////////////////////////////////////////////////////
	}


};
};
