#include <iostream>

using namespace std;

int* selectionSort(int arr[], int length) {
    int* sortedArr = new int[length];
    int temp;

    for (int i = 0; i < length; i++) {
        sortedArr[i] = arr[i];
    }

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (sortedArr[i] < sortedArr[j]) {
                temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }

    return sortedArr;
}

int main()
{
    int n; cin >> n;

    int unsortedArr[n];

    for (int i = 0; i < n; i++) {
        cin >> unsortedArr[i];
    }

    int* sortedArr = selectionSort(unsortedArr, n);


    int sum = 0;
    int coin = 1;
    int first = sortedArr[0];

    for (int i = 1; i < n; i++) {
        sum += sortedArr[i];
    }

    for (int i = 1; i < n; i++) {
        if (first <= sum) {
            sum -= sortedArr[i];
            first += sortedArr[i];
            coin++;
        }
    }


    cout << coin;

}

