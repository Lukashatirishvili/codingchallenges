#include <iostream>
using namespace std;

int main()
{
    long long t, a, b;

    cin >> t;

    long long result = 0;

    while (t--) {
        cin >> a >> b;

        if (a % b > 0) {
            result = (a / b + 1) * b - a;
            cout << result << endl;
        } else cout << 0 << endl;

        result = 0;
    }
}

