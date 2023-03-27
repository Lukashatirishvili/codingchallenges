#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;
    long long x = 0;
    int result = 1;

    while (n > 0) {
        x = n % 10;
        n = n / 10;
        if (x % 2 == 1) result = -1;
    }

    if (result == 1) cout << "YES";
    if (result == -1) cout << "NO";

}
