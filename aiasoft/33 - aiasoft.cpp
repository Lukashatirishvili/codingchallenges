#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = a[0];

    for (int i = 0; i < n; i++) {
        if (x < a[i]) x = a[i];
    }

    cout << x;
}
