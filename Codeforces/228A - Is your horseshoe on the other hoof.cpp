#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    int count = 0;
    int temp;

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {
        temp = arr[i];
        for (int j = i + 1; j < 4; j++) {
            if (temp == arr[j]) {
                count++;
            }
        }
    }

    if (count > 3) {
        count = 3;
    }
    else if (count == 3) {
        count = 2;
    }

    cout << count;
}

