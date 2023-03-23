#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;

    int a[n + 1];
    int b[m + 1];
    int check;

    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }


    a[1] = 1;
    a[2] = 2;

    for (int i = 1; i <= m; i++) {
        if (b[i] == 1) {
            a[1] = 0;
            a[2] = 1;
        }

        if (b[i] == 2) a[2] = 0;
    }

    for (int i = 1; i <= m; i++) {
        a[b[i]] = 0;
    }


    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
        for (int j = 1; j <= m; j++) {
            a[b[j]] = 0;
        }
    }

    if (a[n] == 0) cout << -1;
    else cout << a[n];

}
