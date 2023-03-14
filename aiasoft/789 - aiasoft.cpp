#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/789

int main() {
    int n; cin >> n;

    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 1) x[i] += 1;
    }

    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
}
