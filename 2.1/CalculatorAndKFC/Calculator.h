#pragma once

class Calculator
{
public:
    Calculator();
    ~Calculator();

    static int calculate(int a, char b, int c);
    static int GCD(int a, int b);
    static int sum_of_numbers(int x);
    static int factorial(int x);
    static int fibonachi(int x);
};
