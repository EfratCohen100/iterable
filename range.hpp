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

range(T _begin,T _end);

class iterator{
public:
    T _iter;
    T m_value;
    T m_next;
    iterator(T iter);

//      T _container1;
//      T _container2;
//  range(T rangeConst1 , T rangeCont2);
//  T begin(T container1,T container2);
//  T end( T container2, T container2);
//   void operator++(iter++);

		T& operator*() const {
			_iter=m_value;
            return _iter;
		}

		// T* operator->() const {
		// 	return &(T _iter;->m_value);
		// }

		
		iterator& operator++() {
			_iter=m_next;
			return *this;
		}

		const iterator operator++(int) {
			iterator tmp= *this;
			_iter=m_next;
			return tmp;
		}

		bool operator==(const iterator& rhs) const {
			return _iter == rhs._iter;
		}

		bool operator!=(const iterator& rhs) const {
			return _iter != rhs._iter;
		}

 };

     public:

    iterator begin() {
		return iterator{_begin};
	}
	
	iterator end() {
		return iterator{_end};
	}

};
}