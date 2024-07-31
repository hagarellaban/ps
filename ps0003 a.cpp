#include <iostream>
int main()
{
	int number ;
	int num;
	std::cin >> number;
	
	num = number % 2;
	if (num == 0)
	{
	
		std::cout << "even";
	}
	else {
		std::cout << "odd";

	}
}
