#include <iostream>
int main()
{
  // prompting user for number 2/2
	int number;
	std::cin >> number;

  // checking if the number is odd or even 3/3
  std::cout << "Number is ";
	if (number % 2 == 0)
	{
		std::cout << "even" << std::endl;
	}
	else {
		std::cout << "odd" << std::endl;
	}

  return 0;
}
// good work 👍 7/10

// Note: u can use ternary operator
// std::cout << "Number is " << ((x % 2 == 0) ? "even" : "odd") << std::endl
