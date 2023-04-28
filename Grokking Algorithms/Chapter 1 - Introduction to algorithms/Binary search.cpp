#include <iostream>
using namespace std;


int binarySearch(int array[], int size, int searchValue) {

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {

        mid = (low + high) / 2;

        if (array[mid] == searchValue) {
            return mid;
        }

        else if (array[mid] > searchValue) {
            high = mid - 1;
        }

        else if (array[mid] < searchValue) {
            low = mid + 1;
        }

    }
        return -1;
}

int main()
{
    int n = 8;
    int arr[n] = {3, 7, 11, 15, 19, 24, 27, 31};

    int userValue;

    cout << "Enter an integer: " << endl;
    cin >> userValue;

    int result = binarySearch(arr, n, userValue);

    if (result >= 0) {
        cout << "The number " << arr[result]
        << " was found at the element with index " << result;
    } else cout << "The number " << userValue << " was not found.";


}

