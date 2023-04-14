#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2, p3;
    cin >> n;

    int count = 0;
    int sum;

    while (n--) {
        cin >> p1 >> p2 >> p3;
        sum = p1 + p2 + p3;

        if (sum > 1) count++;
    }

    cout << count;
}

