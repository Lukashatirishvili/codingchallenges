#include <iostream>;

using namespace std;

int main () {
    int n = 10, a[n] = {3, 5, 3, 5, 8, 9, 1, 6, 11, 3};
    int x; cin >> x;

    int j = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) j = i;
    }
    cout << j;
}
