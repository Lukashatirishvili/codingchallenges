#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    b = b * 2;
    c = c * 3;

    y = y * 2;
    z = z * 3;

    int t1 = a + b + c;
    int t2 = x + y + z;

    if (t1 > t2) cout << "YES";
    else cout << "NO";
}
