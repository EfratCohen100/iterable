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
	range<T>(T _begin, T _end) : _begin(_begin), _end(_end) {}

	class iterator
	{
	private:
		T _iter;

	public:
		iterator(T _iter) : _iter(_iter) {}

		auto &operator*() const
		{

			return _iter;
		}

		// auto *operator-> () const
		// {

		// 		return &_iter;

		// }

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

	class const_iterator
	{
	private:
		T _iter;

	public:
		const_iterator(T _iter) : _iter(_iter) {}

		const auto &operator*() const

		{

			return _iter;
		}

		const_iterator &operator++()

		{

			++(_iter);
			return *this;
		}

		bool operator!=(const const_iterator &other) const
		{
			return (_iter) != (other._iter);
		}
	};

public:
	iterator begin()
	{
		return range<T>::iterator(_begin);
	}

	iterator end()
	{
		return range<T>::iterator(_end);
	}

	const_iterator begin() const
	{
		return range<T>::const_iterator(_begin);
	}

	const_iterator end() const
	{
		return range<T>::const_iterator(_end);
	}
};
} // namespace itertools
