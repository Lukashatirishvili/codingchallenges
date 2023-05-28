#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == c &&  b != a && b != c) cout << "Yes";
    else if (b == c && a != b && a != c) cout << "Yes";
    else if (b == a && c != b && c != a) cout << "Yes";
    else cout << "No";
}
