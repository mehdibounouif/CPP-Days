#include "Array.h"

int main()
{
  Array<int> a(3);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;

  std::cout << a[0] << std::endl;
  std::cout << a[1] << std::endl;
  std::cout << a[2] << std::endl;

  Array<int> b = a;
  b[0] = 100;
  std::cout << "===========\n";
  std::cout << a[0] << std::endl;
  std::cout << b[0] << std::endl;


//  try {
//    std::cout << a[4];
//  }catch (...) {
//    std::cout << "out of bounds!" << std::endl;
//  }
  try {
    std::cout << a[2] <<std::endl;
  }catch (...) {
    std::cout << "out of bounds!" << std::endl;
  }

}