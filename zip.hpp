#pragma once
#include "range.hpp"
using namespace std;
#include <iostream>
#include <sstream>






namespace itertools
{

template <typename T,typename U>

class zip
{
private:
	T firstType;
	U secondType;

public:
	zip(T firstType, U secondType) : firstType(firstType) , secondType(secondType) {}

	class iterator
	{

	private:
		typename T::iterator itr1B;
		typename U::iterator itr2B;
		typename T::iterator itr1E;
		typename U::iterator itr2E;

		

	public:
		iterator(typename T::iterator itr1B,typename T::iterator itr1E, typename U::iterator itr2B,typename U::iterator itr2E) : itr1B(itr1B),itr1E(itr1E) , itr2B(itr2B),itr2E(itr2E) {}

		auto operator*() const
		{
			
			return pair<decltype(*itr1B),decltype(*itr2B)>(*itr1B,*itr2B);			
		}



		// ++i;
		iterator &operator++()
		{
			++itr1B;
			++itr2B;
			return *this;
		}

		// i++;
		const iterator operator++(int)
		{
			iterator temp = *this;
			operator++();
			return *this;
		}

		// bool operator==(const iterator &rhs) const
		// {
		// 	return true;
		// }

		bool operator!=(const iterator &rhs) const     //?
		{
			return !(*itr1B==*rhs.itr1B && *itr2B == *rhs.itr2B);
			//return (*itr1B!=*rhs.itr1B) || (*itr2B != *rhs.itr2B);
		}

		

	};

public:
	iterator begin()
	{
		return  iterator(firstType.begin(),firstType.end(), secondType.begin(),secondType.end());
	}

	iterator end()
	{
		return   iterator(firstType.end(),firstType.end(),secondType.end(), secondType.end());
	}




};

template <typename T1, typename T2> 
ostream& operator<< (ostream& out, const pair<T1,T2>& thepair) {
	out << thepair.first << "," << thepair.second;
	return out;
}
}
