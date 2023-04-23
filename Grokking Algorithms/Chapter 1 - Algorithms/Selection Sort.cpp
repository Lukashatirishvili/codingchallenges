#include <iostream>

using namespace std;

int findMin(int array[], int size) {
    int min = array[0];
    
    for (int i = 0; i < size; i++) {
        if (array[i] < min) min = array[i];
    }
    
    return min;
}

int* selectionSort(int array[], int size) {
    int* sortedArray = new int[size];
    for (int i = 0; i < size; i++) {
        sortedArray[i] = findMin(array, size);
    }
    
    return sortedArray;
    
}

int main()
{   
    int n = 9;
    int array[n] = {3, 1, 9, 2, 5, 14, 11, 17, 7};
    
    int* result = selectionSort(array, n);
    
    for (int i = 0; i < n; i++) {
        cout << result[i];
    }
}
