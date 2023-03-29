#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int r = abs(a - b);

    if(r <= 1 || r == n - 1) cout << "YES";
    else cout << "NO";
}
