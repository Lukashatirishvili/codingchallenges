#include <iostream>

using namespace std;


string tolowercase(string str) {
    string result;

    for (int i = 0; i < str.length(); i++) {
        char x = str[i];
        result += tolower(x);
    }

    return result;
}


int main()
{
    string str;
    cin >> str;

    str = tolowercase(str);

    string result;

    for (int i = 0; i < str.length(); i++) {
        char x = str[i];

        if (x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i') {
            continue;
        }
        else {
            result += '.';
            result += x;
        }
    }

    cout << result;

}

