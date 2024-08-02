#include <iostream> 
 
int main() {
    // prompting user for 2 operands and an operator 2/2
    // Declare variables 
    double num1, num2; 
    char op; 
     
    // Prompt user to enter two numbers 
    std::cout << "Enter the two operands: "; 
    std::cin >> num1 >> num2; 
     
    // Prompt user to enter an operator 
    std::cout << "Enter the operator + - * / %: "; 
    std::cin >> op; 
     
    // Initialize flag for decimal point check 
    bool has_dec_point = false; 
     
    // Store operands in test variables as integers to check for decimal point  
    int test1 = num1; 
    int test2 = num2; 

    // checking user inputs and processing 3/4
    // printing the result if all data is valid 1/1
    // Check if either operand has a decimal point 
    if (num1 - test1 == 0 || num2 - test2 == 0) 
        has_dec_point = true; 
     
    // Perform arithmetic operation based on the operator 
    switch (op) { 
        case '+': { 
            std::cout << '(' << num1 << ") + (" << num2 << ") = " << num1 + num2 << std::endl; 
            break; 
        } 
        case '-': { 
            std::cout << '(' << num1 << ") - (" << num2 << ") = " << num1 - num2 << std::endl; 
            break; 
        } 
        case '*': { 
            std::cout << '(' << num1 << ") * (" << num2 << ") = " << num1 * num2 << std::endl; 
            break; 
        } 
        case '/': { 
            if (num2 == 0 && num1 != 0) 
                std::cout << "Math Error: cannot divide by 0" << std::endl; 
            else if (num1 == 0 && num2 == 0) 
                std::cout << "Infinite Number of solutions: (0 / 0) is Undefined Quantity." << std::endl; 
            else 
                std::cout << '(' << num1 << ") / (" << num2 << ") = " << num1 / num2 << std::endl; 
            break; 
        } // 1/1
        case '%': { 
            if (has_dec_point) { 
                std::cout << "cannot execute modulo operation for floating point numbers" << std::endl; 
            } else { 
                std::cout << '(' << num1 << ") % (" << num2 << ") = " << test1 % test2 << std::endl; 
            } 
            break; 
        } // 0.5/1
        default: 
            std::cout << "Invalid character for operator." << std::endl; // 1/1
    } // 0.5/1
     
    return 0; 
}
// great work 😎 9/10 ⭐
