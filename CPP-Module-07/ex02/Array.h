#ifndef _ARRAY_
#define _ARRAY_

#include <iostream>

template <typename T>
class Array
{
  unsigned int  _size;
  T             *data;
  public:
  Array();

  Array(unsigned int n);

  Array(const Array &obj);

  Array &operator=(const Array &obj);

  ~Array();

  T &operator[](unsigned int n);

  const T &operator[](unsigned int n) const;

  unsigned int size() const;
};

#include "Array.tpp"

#endif