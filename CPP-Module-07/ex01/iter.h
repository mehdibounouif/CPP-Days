#ifndef _ITER_
#define _ITER_

#include <iostream>

template <typename T>
void	iter(T *array, size_t const len, void(*f)(T &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void	iter(const T *array, size_t const len, void(*f)(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void	print(T a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	increment(T &a)
{
	a++;
}

#endif
