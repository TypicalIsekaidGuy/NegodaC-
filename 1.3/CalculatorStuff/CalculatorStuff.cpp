#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    char c;

    cin >> a >> c >> b;

    switch (c)
    {
    case '+': cout << a + b; break;
    case '-': cout << a - b; break;
    case '*': cout << a * b; break;
    case '/': cout << a / b; break;
    }

    return 0;
}