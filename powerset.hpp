#pragma once


namespace itertools
{
template <typename T>

class powerset
{

  private:
	T _begin;
	T _end;

  public:
	// powerset(T _begin, T _end)
	// {
	// 	this->_begin = _begin;
	// 	this->_end = _end;
	// }
	powerset <T> (T _begin,T _end) : _begin(_begin), _end(_end) {}

	class iterator
	{
	  private:
		T _iter;

	public:
		iterator(T _iter) : _iter(_iter) {}

		T &operator*() const
		{
			return _iter;
		}

		T *operator->() const
		{
			return &(_iter);
		}

		// ++i;
		iterator &operator++()
		{
			++(_iter);
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
			return (_iter) == (rhs._iter);
		}

		bool operator!=(const iterator &rhs) const
		{
			return (_iter) != (rhs._iter);
		}
	};

  public:
	iterator begin()
	{
		return powerset<T>::iterator{_begin};
	}

	iterator end()
	{
		return powerset<T>::iterator{_end};
	}


};

};