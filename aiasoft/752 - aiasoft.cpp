#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int p1 = n / 1000;
    int p2 = n % 1000;

    int sum1 = 0;
    int sum2 = 0;

    while (p1 > 0) {
        sum1 = sum1 + p1 % 10;
        p1 = p1 / 10;
    }

    while (p2 > 0) {
        sum2 = sum2 + p2 % 10;
        p2 = p2 / 10;
    }

    if (sum1 == sum2) cout << "YES";
    else cout << "NO";

}
