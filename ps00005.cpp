#include <iostream> 

int main() {
    // Declare variables 
    double Num1, Num2;
    char OP;

    // Prompt user to enter two numbers 
    std::cout << "Enter the two operands:\n ";
    std::cin >> Num1 >> Num2;

    // Prompt user to enter an operator 
    std::cout << "Enter the operator + - * / %: ";
    std::cin >> OP;

    // Initialize flag for decimal point check 
    bool Has_Dec_point = false;

    // Store operands in result variables to check for decimal point 
    double Result1 = Num1;
    double Result2 = Num2;
    int Test1 = Result1;
    int Test2 = Result2;

    // Check if either operand has a decimal point 
    if (Result1 - Test1 > 0 || Result2 - Test2 > 0)
        Has_Dec_point = true;

    // Perform arithmetic operation based on the operator 
    switch (OP) {
    case '+': {
        std::cout << '(' << Num1 << ") + (" << Num2 << ") = " << Num1 + Num2 << std::endl;
        break;
    }
    case '-': {
        std::cout << '(' << Num1 << ") - (" << Num2 << ") = " << Num1 - Num2 << std::endl;
        break;
    }
    case '*': {
        std::cout << '(' << Num1 << ") * (" << Num2 << ") = " << Num1 * Num2 << std::endl;
        break;
    }
    case '/': {
        if (Num2 == 0 && Num1 != 0)
            std::cout << "Math Error: cannot divide by 0" << std::endl;
        else if (Num1 == 0 && Num2 == 0)
            std::cout << "Infinite Number of solutions: (0 / 0) is Undefined Quantity." << std::endl;
        else
            std::cout << '(' << Num1 << ") / (" << Num2 << ") = " << Num1 / Num2 << std::endl;
        break;
    }
    case '%': {
        if (Has_Dec_point) {
            std::cout << "cannot execute modulo operation for floating point numbers" << std::endl;
        }
        else {
            std::cout << '(' << Num1 << ") % (" << Num2 << ") = " << int(Num1) % int(Num2) << std::endl;
        }
        break;
    }
    default:
        std::cout << "Invalid character for operator." << std::endl;
    }

    return 0;
}
