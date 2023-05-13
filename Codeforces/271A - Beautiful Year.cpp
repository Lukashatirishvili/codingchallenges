#include <iostream>

using namespace std;

int year (int y) {

    bool result = true;

    int temp = y;
    int arr[4];

    for (int i = 3; i >= 0; i--) {
        arr[i] = temp % 10;
        temp = temp / 10;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] == arr[j]) {
                result = false;
                break;
            }
        }
    }

    return result;

}

int main()
{
    int y;
    cin >> y;

    y += 1;

    int temp = 0;
    bool check;

    while (temp == 0) {
        check = year(y);
        if (check == true) {
            temp = 1;
        }
        else {
            y++;
        }
    }

    cout << y;
}

