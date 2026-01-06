#include "Array.h"
template <typename T>
Array<T>::Array(){
    _size = 0;
    data = NULL;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &obj){
  if (this == &obj)
    return (*this);
  delete [] this->data;

  this->_size = obj._size;
  this->data = new T[obj._size]();
  
  for (unsigned int i = 0; i < obj._size; i++)
    this->data[i] = obj.data[i];
  return (*this);
}

template <typename T>
Array<T>::~Array(){
  delete [] this->data;
}

template <typename T>
T &Array<T>::operator[](unsigned int n){
  if (this->_size <= n)
    throw std::exception();
  else 
  return (this->data[n]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int n) const{
  if (this->_size <= n)
    throw std::exception();
  else 
    return (this->data[n]);
}

template <typename T>
unsigned int Array<T>::size() const{
  return (this->_size);
}