#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;

    bool t = true;

    while (temp > 0) {
        if (temp % 10 == 4 || temp % 10 == 7) {
            t = true;
        }
        else {
            t = false;
            break;
        }
        temp = temp / 10;
    }

    if (t || n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

