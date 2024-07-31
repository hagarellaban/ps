#include <iostream> vint
int main() {

	double num;

	std::cout << "Enter a number from 32 to 126:";

	std::cin >> num;

	int test = num;

	if ((num >= 32) && (num <= 126)) {

		std::cout << "the character for " << num << "is " << char(num) << "\n";


	}
	else if ((num - test > 0) || (num - test < 0)) {

		std::cout << "Invalid: a floating point number!";
	}



	else if ((num < 0) || (num > 126) || (num < 32)) {

		std::cout << "invalid: number is out of the range!";



	}
	else {

		std::cout << "Invalid character/s or zero";

	}
}