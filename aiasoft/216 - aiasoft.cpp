#include <iostream>;

using namespace std;

int main() {
    int n, sum;
    cin >> n;

    int arr[n][n];
    sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    cout << sum;
}
