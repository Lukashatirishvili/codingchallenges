#include <iostream>

using namespace std;

int main()
{
    int n, a; cin >> n;

    int temp = 0;
    int counter = 0;

    while (n--) {
        cin >> a;

        if (a > 0) temp += a;
        else if (a < 0) {
            if (temp > 0) {
                temp--;
            }
            else if (temp < 1) {
                counter++;
            }
        }
    }

    cout << counter;
}

