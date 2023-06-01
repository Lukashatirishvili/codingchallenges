#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    string result;
    for (int i = 0; i < str.length(); i++) {

        if (str[i] == '-' && str[i + 1] == '.') {
            result += '1';
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-') {
            result += '2';
            i++;
        }
        else if (str[i] == '.') result += '0';
    }

    cout << result;
}

