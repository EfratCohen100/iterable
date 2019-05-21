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
	
	range(T _begin,T _end):_begin(_begin) , _end(_end){}


	class const_iterator
	{
	  private:
		T _iter;

    public:
		const_iterator( T _iter ) : _iter(_iter) {}

		auto &operator*() const
		{
			
				return _iter;
			
		}

		// auto *operator-> () const
		// {
		
		// 		return &_iter;
		
		// }

		// ++i;
		const_iterator &operator++()
		{
			++(_iter);
			return *this;
		}

		// i++;
		// Usually const_iterators are passed by value and not by const& as they are small.
		const const_iterator operator++(int)
		{
			const_iterator tmp = *this;
			(_iter)++;
			return tmp;
		}

		bool operator==(const const_iterator &rhs) const
		{
			return (_iter) == (rhs._iter);
		}

		bool operator!=(const const_iterator &rhs) const
		{
			return (_iter) != (rhs._iter);
		}
	};

public:
	const_iterator begin() const 
	{
		return range<T>::const_iterator(_begin);
	}

	const_iterator end() const
	{
		return  range<T>::const_iterator(_end);
	}
};
} // namespace itertools



