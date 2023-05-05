#include <iostream>

using namespace std;

int main()
{
    string str; cin >> str;

    int length = str.length();

    char arr[length];

    for (int i = 0; i < length; i++) {
        arr[i] = '1';
    }

    int count = 0;

    for (int i = 0; i < length; i++) {
        char x = str[i];
        for (int j = 0; j < length; j++) {
            if (arr[j] == x) {
                count++;
            }
        }
        if (count == 0) {
            arr[i] = x;
        }
            count = 0;
    }

    int ones = 0;

    for (int i = 0; i < length; i++) {
        if (arr[i] == '1') ones++;
    }

    int result = length - ones;

    if (result % 2 == 0) cout << "CHAT WITH HER!";
    if (result % 2 == 1) cout << "IGNORE HIM!";


}

