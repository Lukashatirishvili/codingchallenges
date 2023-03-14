#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/141

int main () {
    int m; cin >> m;
    int n; cin >> n;
    int k[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> k[i];
        sum = sum + k[i];
    }

    if (m >= sum) {
        cout << "YES";
    } else cout << "NO";
}
