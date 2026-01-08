#include "Array.h"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE                                                                                                                           
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//                                                                                                               
	return 0;
}

//int main()
//{
//  Array<int> a(3);
//  a[0] = 1;
//  a[1] = 2;
//  a[2] = 3;
//
//  std::cout << a[0] << std::endl;
//  std::cout << a[1] << std::endl;
//  std::cout << a[2] << std::endl;
//
//  Array<int> b = a;
//  b[0] = 100;
//  std::cout << "===========\n";
//  std::cout << a[0] << std::endl;
//  std::cout << b[0] << std::endl;
//
//
//  std::string name = "mehdi";
//  std::string nike = "homie";
//  Array<std::string> c(2);
//
//  c[0] = name;
//  c[1] = nike;
//
//  std::cout << c[0] << std::endl;
//  std::cout << c[1] << std::endl;
////  try {
////    std::cout << a[4];
////  }catch (...) {
////    std::cout << "out of bounds!" << std::endl;
////  }
//  try {
//    std::cout << a[2] <<std::endl;
//  }catch (...) {
//    std::cout << "out of bounds!" << std::endl;
//  }
//
//}

