#include <iostream>

using namespace std;

int main()
{
    int n, p, q;

    cin >> n;

    int count = 0;

    while (n--) {
        cin >> p >> q;

        if (2 <= q - p) {
            count++;
        }
    }

    cout << count;
}

