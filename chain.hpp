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

	template<typename T2,typename U2>class iterator
	{

	private:
		T2 itr1;
	    U2 itr2;
        bool checkItr;
		

	public:
		iterator(T2 itr1, U2 itr2) : itr1(itr1) , itr2(itr2), checkItr(true) {}

		decltype(*itr1)&operator*() const
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
		iterator<T2,U2> &operator++()
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
	 typedef decltype(c1.begin()) T2;
            typedef decltype(c2.begin()) U2;
            return iterator<T2,U2>{c1.begin(),c2.begin()};
	//return  iterator<typedef decltype(c1.begin()),typedef decltype(c2.begin())>{c1.begin(),c2.begin()}; 
	}

	auto end()
	{
		//return  chain<T,U>::iterator(c1.end(), c2.end());
	 //return iterator<typedef decltype(c1.end()),typedef decltype(c2.end())>{c1.end(),c2.end()};  
	  typedef decltype(c1.end()) T2;
            typedef decltype(c2.end()) U2;
            return iterator<T2,U2>{c1.end(),c2.end()};

	}
	
};
};
