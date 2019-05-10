#pragma once
namespace itertools
{
template <typename T>
class range
{
    private:

    T _begin;
    T _end;

public:

range(T _begin,T _end)
{
    this -> _begin =_begin;
    this-> _end = _end;
}

class iterator{
public:
    T *_iter;
    // T m_value;
    // T m_next;

    iterator(T* _iter = nullptr): _iter(_iter) {}
   

//      T _container1;
//      T _container2;
//  range(T rangeConst1 , T rangeCont2);
//  T begin(T container1,T container2);
//  T end( T container2, T container2);
//   void operator++(iter++);

		T& operator*() const {
			return *_iter;
		}

		// T* operator->() const {
		// 	return &(m_pointer->m_value);
		// }

		// ++i;
		iterator& operator++() {
			++(*_iter);
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator operator++(int) {
			iterator tmp= *this;
			(*_iter)++;
			return tmp;
		}

		bool operator==(const iterator& rhs) const {
			return (*_iter) == (*rhs._iter);
		}

		bool operator!=(const iterator& rhs) const {
			return (*_iter) != (*rhs._iter);
		}

 };

     public:

    iterator begin() {
		return iterator{&_begin};
	}
	
	iterator end() {
		return iterator{&_end};
	}


 template<typename T> friend ostream& operator<< (ostream& os,  range<T>& type); ///??
};

    template<typename T> ostream& operator<< (ostream& os,  range<T>& type){
        for(T i: type){
            os << i ;
        }
        return os;
    }
};
