#include <iostream>;

using namespace std;

int main () {
    int n; cin >> n;
    int x; cin >> x;

    int a[n];

    int j = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == x) j = 1;
    }

    if (j == 1) cout << "YES";
    else cout << "NO";
}
