#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    int count = 0;
    int temp;

    while (n > 0) {
        temp = n % 10;
        n = n / 10;

        if (temp == 4 || temp == 7) {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES";
    }
    else cout << "NO";
}

