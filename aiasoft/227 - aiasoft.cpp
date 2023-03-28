#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < c && a > b || a > c && a < b) cout << a;
    if (b < c && b > a || b > c && b < a) cout << b;
    if (c < a && c > b || c > a && c < b) cout << c;

}
