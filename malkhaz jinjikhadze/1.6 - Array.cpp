#include <iostream>;

using namespace std;

int main () {
    // Find minimum
    int n = 10, a[n] = {3, 5, 3, 5, 8, 9, 11, 6, 11, 3};

    int mn = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < mn) mn = a[i];
    }
    cout << mn << endl;

    // another way
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[j]) j = i;
    }
    cout << a[j];
}
