#include <iostream>;

using namespace std;

int* selectionSort(int arr[], int size) {
    int* sortedArr = new int[size];

    for (int i = 0; i < size; i++) {
        sortedArr[i] = arr[i];
    }

    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sortedArr[i] > sortedArr[j]) {
                temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }

    return sortedArr;
}

int main() {
    int arr[] = {4, 7, 1, 9, 5, 2};

    int length = sizeof(arr) / sizeof(arr[0]);

    int* sortedArr = selectionSort(arr, length);

    cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        cout << sortedArr[i] << " ";
    }

}
