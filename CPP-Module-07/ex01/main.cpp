#include "iter.h"

int	main()
{
	{
		const int arr[3] = {1, 2, 3};
		iter(arr, 3, print);
	}
	{
		int arr[3] = {1, 2, 3};
		iter(arr, 3, increment);
		std::cout << "==============\n";
		iter(arr, 3, print);
	}
}
