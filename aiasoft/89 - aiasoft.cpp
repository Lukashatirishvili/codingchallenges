#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    if (m >= n || n == 0) cout << "Impossible";
    else cout << n - m;
}
