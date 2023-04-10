#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (arr[k] == 0) {
            if (arr[i] > arr[k]) count++;
        }
        else {
            if (arr[i] >= arr[k]) count++;
        }
    }

    cout << count;

}

