#include <iostream>

using namespace std;

int main()
{
    string s, result; cin >> s;

    int lowercase = 0, uppercase = 0;

    for (int i = 0; i < s.length(); i++) {
        char x = s[i];
        if (x == toupper(x)) {
            uppercase++;
        }
        if (x == tolower(x)) {
            lowercase++;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        char y = s[i];
        if (uppercase > lowercase) {
            result += toupper(y);
        }
        else {
            result+= tolower(y);
        }
    }

    cout << result;
}

