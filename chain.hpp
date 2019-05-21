
#pragma once

namespace itertools
{
template <typename T, typename U>
class chain
{

private:
    T c1;
    U c2;

public:
    chain(T c1, U c2) : c1(c1) , c2(c2) {}

    class const_iterator
    {

    private:
        typename T::const_iterator itr1;
        typename T::const_iterator itr1_end;
        typename U::const_iterator itr2;

        

    public:
        const_iterator(typename T::const_iterator itr1,  typename T::const_iterator itr1_end,  typename U::const_iterator itr2) : itr1(itr1) , itr2(itr2) , itr1_end(itr1_end) {}

        auto operator*() const
        {

            if( itr1!= itr1_end) {
                return *itr1;
            }
            else {
                return *itr2;
            }
            
        }

        // ++i;
        const_iterator &operator++()
        {
            if( itr1!= itr1_end) {
                ++itr1;
            }
            else {
                ++itr2;
            }
            return *this;
        }

        
        bool operator!=(const const_iterator &rhs) const
        {
            return itr2!=rhs.itr2;
        }
    };

public:
    const_iterator begin() const
    {
        return chain<T,U>::const_iterator(c1.begin(), c1.end() ,c2.begin());
    }

    const_iterator end() const
    {
        return chain<T,U>:: const_iterator(c1.end(), c1.end() ,c2.end());
    }
};
} // namespace itertools