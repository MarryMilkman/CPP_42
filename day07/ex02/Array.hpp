#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
public:
	Array() : _size(255)
	{
		this->_arr = new T[this->_size];
	}
	
	Array(unsigned int i) : _size(i)
	{
		this->_arr = new T[i];
	}

	Array(Array const & src)
	{
		*this = src;
	}
	~Array()
	{
	}

	unsigned int	size(void)
	{
		return (this->_size);
	}
	
	Array			& operator=(Array const & src)
	{
		int		i = 0;

		delete this->_arr;
		this->_arr = new T[src.size()];
		while (i < src.size())
		{
			this->_arr[i] = src->_arr[i];
			i++;
		}
		return (*this);
	}

	T				& operator[](int const i)
	{
		if (i >= this->_size)
			throw "Error";
		return (this->_arr[i]);
	}

private:
	const int		_size;
	T				*_arr;
};

#endif