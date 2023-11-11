#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x;
    cout << "Give me 1 number i give u sum of numbers in this number (ye ye perfect english)\n";

    cin >> x;

    int answer = 0;
    while (x > 0)
    {
        answer += x % 10;
        x /= 10;
    }

    cout << answer;

    return 0;
}
