#include <iostream>;

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = a[0];

    for (int i = 0; i < n; i++) {
        if (mn > a[i]) mn = a[i];
    }

    cout << mn;

}
