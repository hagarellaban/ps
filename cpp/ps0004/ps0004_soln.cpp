#include <iostream>
int main()
{
    // prompting user for number 1.5/1.5
    double num;
    std::cout << "Enter a number from 32 to 126:";
    std::cin >> num;

    // checking invalidaty of user's input 4/4
	  // printing the number and the opposite printable character 2/2
    int test = num;
    if (num == 0) {
        std::cout << "Invalid character/s or zero";
    }
    else if ((num - test) != 0)
    {
        std::cout << "Invalid: a floating point number!";
    }
    else if ((num >= 32) && (num <= 126))
    {
        std::cout << "the character for " << num << " is " << char(num) << "\n";
    }
    else if (num > 126 || num < 32)
    {
        std::cout << "invalid:number is out of the range! ";
    }
  
    return 0;
}
// great work 😎 8.5/10 ⭐
