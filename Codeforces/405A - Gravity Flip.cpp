#include <iostream>

using namespace std;

int main()
{
    int length, temp;
    cin >> length;

    int arr[length];

    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }


}

