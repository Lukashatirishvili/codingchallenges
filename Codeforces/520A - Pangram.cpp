#include <iostream>

using namespace std;

int main()
{
    int length;
    cin >> length;
    string str;
    cin >> str;

    char arr[length];

    for (int i = 0; i < length; i++) {
        arr[i] = tolower(str[i]);
    }

    char x = 'a';
    char y = 'z';
    bool result = true;

    for (char i = x; i <= y; i++) {
        for (int j = 0; j < length; j++) {
            if (arr[j] == x) {
                result = true;
                break;
            }
            else {
                result = false;
            }
        }
        x++;
        if (result == false) {
            break;
        }
    }

    if (result == true) cout << "YES";
    else cout << "NO";
}

