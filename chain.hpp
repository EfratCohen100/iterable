#pragma once

namespace itertools
{
template <typename T1, typename U1>
class chain
{

private:
	T1 c1;
	U1 c2;

public:
	chain(T1 c1, U1 c2) : c1(c1) , c2(c2) {}

	class iterator
	{

	private:
		T1 itr1;
	    U1 itr2;
        bool checkItr;
		

	public:
		iterator(T1 itr1, U1 itr2) : itr1(itr1) , itr2(itr2), checkItr(true) {}

		auto operator*() const
		{
			    if(checkItr)
				{
                 return *itr1;
				}
				else
				{
					return *itr2;
				}
		}

		// auto *operator-> () const
		// {
		
		// 		return &itr1;
		
		// }

		// ++i;
		iterator<T1,U1> &operator++()
		{
			if(checkItr==true)
			{
				++(itr1);
			}
			
			else
			{
                ++(itr2);
			}

			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator operator++(int)
		{
			if(checkItr==true)
			{
               itr1++;
			}
			else
			{
				itr2++;
			}		
			return *this;
		}
		
		bool operator!=(const iterator<T2,U2> &rhs) //const
		{
             if(itr1== rhs.itr1 && checkItr==true)
			 {
				 checkItr= false;
		     }

                if(checkItr){
                    return itr1 != rhs.itr1;
                }
                else{
                    return itr2 != rhs.itr2;
                }
            };
	};

public:
	auto begin()
	{
	//	return chain<T,U>::iterator(c1.begin(), c2.begin());
	 typedef decltype(c1.begin()) T1;
            typedef decltype(c2.begin()) U1;
            return iterator<T1,U1>{c1.begin(),c2.begin()};
	//return  iterator<typedef decltype(c1.begin()),typedef decltype(c2.begin())>{c1.begin(),c2.begin()}; 
	}

	auto end()
	{
		//return  chain<T,U>::iterator(c1.end(), c2.end());
	 //return iterator<typedef decltype(c1.end()),typedef decltype(c2.end())>{c1.end(),c2.end()};  
	  typedef decltype(c1.end()) T1;
            typedef decltype(c2.end()) U1;
            return iterator<T1,U1>{c1.end(),c2.end()};

	}
	
};
};
