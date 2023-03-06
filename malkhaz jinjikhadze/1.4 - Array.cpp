#include <iostream>;

using namespace std;

int main () {
    // Sum of the odd numbers
    int n;
    cin >> n;
    int a[n];

    int sum;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) sum += a[i];
    }
    cout << sum;




}
