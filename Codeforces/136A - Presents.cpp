#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    n++;

    int arr[n];
    int result[n];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }

    int temp = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if(arr[j] == temp) {
                result[i] = j;
            }
        }
        temp++;
    }

    for (int i = 1; i < n; i++) {
        cout << result[i] << " ";
    }
}

