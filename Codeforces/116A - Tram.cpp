#include <iostream>

using namespace std;

int main()
{
    int n, a, b, temp, result; cin >> n;

    n = n - 1;

    cin >> a >> b;

    temp = b;
    result = b;

    while (n--) {
        cin >> a >> b;
        int k = temp - a + b;

        temp = k;

        if (temp > result) {
            result = temp;
        }

    }

    cout << result;
}

