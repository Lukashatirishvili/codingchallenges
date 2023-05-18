#include <iostream>

using namespace std;

int main()
{
    string str, result;
    cin >> str;

    int length = str.length();

    for (int i = 0; i < length; i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            result = "YES";
            break;
    }
        else result = "NO";
    }

    cout << result;
}

