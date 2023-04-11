#include <bits/stdc++.h>
using namespace std;

void sortingArray(int array[], int size) {

    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortingArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
