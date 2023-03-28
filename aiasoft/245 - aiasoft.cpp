#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    int c = 0;
    int r = 0;

    while (c <= m) {
        c = c + n * k;
        r++;
    }

    cout << r;

}
