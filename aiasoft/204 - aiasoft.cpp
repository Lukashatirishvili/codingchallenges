#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int a[n + 1];

    a[1] = 0;

    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1];

        if (i % 2 == 0) {
            if (a[i / 2] < a[i]) a[i] = a[i / 2];
        }

        if (i % 3 == 0) {
            if (a[i / 3] < a[i]) a[i] = a[i / 3];
        }

        a[i]++;
    }

    cout << a[n];

}
