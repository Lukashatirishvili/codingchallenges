#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    // if it only contains uppercase letters
    bool check1;

    for (int i = 0; i < str.length(); i++) {
        char x = str[i];
        if (x == toupper(x)) {
            check1 = true;
        }
        else {
            check1 = false;
            break;
        }
    }

    string temp1;

    for (int i = 0; i < str.length(); i++) {
        char x = str[i];
        temp1 += tolower(x);
    }

    // if all letters except for the first one are uppercase

    bool check2 = false;
    string temp2;
    char x = str[0];
    if (x == tolower(x)) {
        check2 = true;
        temp2 += toupper(x);
    }

    for (int i = 1; i < str.length(); i++) {
        if (check2 == false) {
            break;
        }
        char x = str[i];
        if (x == toupper(x)) {
            temp2 += tolower(x);
        }
        else {
            check2 = false;
            break;
        }
    }

    if (check1 == true) cout << temp1;
    else if (check2 == true) cout << temp2;
    else cout << str;
}

