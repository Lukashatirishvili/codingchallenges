#include <iostream>;

using namespace std;

int main() {
    int n; cin >> n;
    int a[n + 1];

    int d[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    d[1] = a[1];
    d[2] = a[2];

    for (int i = 3; i <= n; i++) {
        d[i] = min(d[i - 1], d[i - 2]) + a[i];
    }

    cout << d[n];
    }
