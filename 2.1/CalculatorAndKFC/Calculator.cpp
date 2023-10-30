#include "Calculator.h"

Calculator::Calculator()
= default;

Calculator::~Calculator()
= default;

int Calculator::calculate(const int a, const char b, const int c)
{

    switch (b)
    {
        case '+': return a + c; 
        case '-': return a - c; 
        case '*': return a * c; 
        case '/': return a / c;
        default: return 0;
    }
}

int Calculator::GCD(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Calculator::sum_of_numbers(int x)
{
    int answer = 0;
    while (x > 0)
    {
        answer += x % 10;
        x /= 10;
    }
    return answer;
}

int Calculator::factorial(int x)
{
    int answer = 1;
    while (x > 1)
    {
        answer *= x--;
    }
    return answer;
}

int Calculator::fibonachi(int x)
{
    if (x < 1) return 0;
    if (x == 1 || x == 2) return 1;

    return fibonachi(x-1) + fibonachi(x - 2);
}
