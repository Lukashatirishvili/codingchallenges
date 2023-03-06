#include <iostream>;

using namespace std;

int main () {
    // Get sum of the elements in a given array
    int n;
    cin >> n;
    int a[n];

    int sum;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum;
}
