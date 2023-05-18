#include <iostream>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    int length = a.length();

    int arr[length];

    for (int i = 0; i < length; i++) {
        if (a[i] == '1' && b[i] == '1') {
            arr[i] = 0;
        }
        else if (a[i] == '0' && b[i] == '0') {
            arr[i] = 0;
        }
        else {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < length; i++) {
        cout << arr[i];
    }
}

