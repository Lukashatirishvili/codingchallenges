#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int result = 0;

    if (a * b * c > result) result = a * b * c;
    if (a * (b + c) > result) result = a * (b + c);
    if ((a * b) + c > result) result = (a * b) + c;
    if (a + b + c > result) result = a + b + c;
    if ((a + b) * c > result) result = (a + b) * c;

    cout << result;
}

