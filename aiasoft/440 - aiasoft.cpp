#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int a[n];
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) cout << a[i] << " ";
    }

}
