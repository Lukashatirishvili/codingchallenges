#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int x = 0;

    while (n > 0) {
        x = x + n % 10;
        n = n / 10;
    }

    cout << x;
}
