#include <iostream>

using namespace std;

int main()
{
    int n, k, y;
    cin >> n >> k;

    int counter = 0;
    while (n--) {
        cin >> y;

        if (k == 5) {
            if (y < 1) counter++;
        }
        if (k == 4) {
            if (y < 2) counter++;
        }
        if (k == 3) {
            if (y < 3) counter++;
        }
        if (k == 2) {
            if (y < 4) counter++;
        }
        if (k == 1) {
            if (y < 5) counter++;
        }
    }

    cout << counter / 3;
}

