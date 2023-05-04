#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;


    string result1, result2;

    for (int i = 0; i < str1.length(); i++) {
        char x = str1[i];
        char y = str2[i];

        result1 += tolower(x);
        result2 += tolower(y);
    }

    int n = 0;

    for (int i = 0; i < result1.length(); i++) {
        if (result1[i] > result2[i]) {
            n = 1;
            break;
        }
        if (result1[i] < result2[i]) {
            n = -1;
            break;
        }
    }

    cout << n;
}

