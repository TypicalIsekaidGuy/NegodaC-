#include <iostream>
#include "Calculator.h"

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    char c;

    cin >> a >> c >> b;

    cout << "Result of expression: " << Calculator::calculate(a, c, b) << endl;
    cout << "GCD: " << Calculator::GCD(a, b) << endl;
    cout << "sum of digits of a first number: " << Calculator::sum_of_numbers(a) << endl;
    cout << "sum of digits of a second number: " << Calculator::sum_of_numbers(b) << endl;
    cout << "factorial of a first number: " << Calculator::factorial(a) << endl;
    cout << "the fibonacci number which is numbered as the second number is: " << Calculator::fibonachi(b) << endl;
    
    
    
    return 0;
}
