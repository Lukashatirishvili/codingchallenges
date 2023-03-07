#include <iostream>;

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int temp = a[n - 1];
    a[n - 1] = a[0];
    a[0] = temp;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
