#include <iostream>

using namespace std;

int main()
{
    string str; cin >> str;
    string result;

    char firstLetter = toupper(str[0]);

    string afterfirst;

    for (int i = 1; i < str.length(); i++) {
        afterfirst += str[i];
    }

    result = firstLetter + afterfirst;

    cout << result;


}

