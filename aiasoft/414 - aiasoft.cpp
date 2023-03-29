#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int t1 = a * 10 + b;
    int t2 = b * 10 + a;

    if (t1 > t2) cout << t1 + 1;
    else cout << t2 + 1;
}
