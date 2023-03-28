#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    b = b * 2;
    a = a - b / 2;

    a = a * 2;
    b = b - a / 2;

    if (a < 1 || b < 1 || a == b) cout << -1;
    else cout << a << " " << b;

}
