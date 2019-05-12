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
	product(T beginT,T endT,U beginU, U endU)
	{
		this->beginT = beginT;
		this->endT = endT;
        this->beginU = beginU;
		this->endU = endU;
	}

product<T,U>(T typeT,U typeU) : beginT(typeT) , beginU(typeU){}
    

	class iterator
	{
	  public:

		T *iterBeginT;
        T *iterEndT;
        U *iterBeginU;
        U *iterEndU;

		iterator(T *iterBeginT = nullptr) : iterBeginT(iterBeginT) {}

		T &operator*() const/////////////////////////////////////////////////////////////////////////////////
		{
			return *iterBeginT;
		}

		T *operator->() const//////////////////////////////////////////////////////////////////////////////////
		{
			return &(iterBeginT);
		}

		// ++i;
		iterator &operator++()
		{
            if(*iterBeginT != *iterEndT)
            {
                ++(*iterBeginT);
            }
            else
            {
               if(*iterBeginU != *iterEndU)
               ++(*iterBeginU);
            }
			return *this;
		}

 		// i++;
		const iterator operator++(int)//////////////////////////////////////////////////////////////////
		{
			iterator tmp = *this;
			(*iterBeginT)++;
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
		return iterator{&beginT};////////////////////////////////////////////////////////
	}

	iterator end()
	{
		return iterator{&endU};///////////////////////////////////////////////////////////
	}


};
};
