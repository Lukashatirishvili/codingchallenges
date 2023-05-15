#include <iostream>

using namespace std;

int main()
{
    int n, a, b, count, result;

    cin >> n >> a;

    n--;
    count = 1;
    result = (n == 0) ? 1 : 0;

    while (n--) {
        cin >> b;

        if (b >= a) {
            a = b;
            count++;
            if (count > result) result = count;
        }
        else {
            a = b;
            if (count > result) result = count;
            count = 1;
        }
    }

    cout << result;
}

