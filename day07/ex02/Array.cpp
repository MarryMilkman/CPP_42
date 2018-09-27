// #include "Array.hpp"

// Array::Array()


// Array::Array(unsigned int size)
// {
// 	this->_size = size;
// 	this->_arr = new T[size];
// }

// Array::Array(Array const & src)
// {
// 	*this = src;
// }

// Array::~Array()
// {
// 	return ;
// }

// unsigned int	size(void)
// {
// 	return (this->_size);
// }

// Array			& operator=(Array const & src)
// {
// 	int		i = 0;

// 	delete this->_arr;
// 	this->_arr = new T[src.size];
// 	while (i < src.size)
// 	{
// 		this->_arr[i] = src->_arr[i];
// 		i++;
// 	}
// 	return (*this);
// }

// T				& operator[](int const i)
// {
// //	if (i >= this->_size)
// //		throw "Error";
// 	return (this->_arr[i]);
// }