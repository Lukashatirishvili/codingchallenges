#include <iostream>;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n + 1];

    a[1] = 1;
    a[2] = (m == 1) ? 1 : 2;

    for (int i = 3; i <= n; i++) {
        a[m] = 0;
        a[i] = a[i - 1] + a[i - 2];
    }

    cout << a[n];
}
