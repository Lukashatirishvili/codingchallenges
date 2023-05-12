#include <iostream>

using namespace std;

int main()
{
    int n, h, a;
    cin >> n >> h;

    int sum = 0;

    while (n--) {
        cin >> a;

        if (a <= h) sum += 1;
        else sum += 2;
    }

    cout << sum;
}

