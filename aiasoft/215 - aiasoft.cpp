#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = x;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

