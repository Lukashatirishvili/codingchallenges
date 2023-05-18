#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, count;
    cin >> n;

    count = 0;
    if (n == 0) count++;

    while (n > 0) {
        if (n % 10 == 0) {
            count++;
        }
        n = n / 10;
    }


    cout << count;
}
