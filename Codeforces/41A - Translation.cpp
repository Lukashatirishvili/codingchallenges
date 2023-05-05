#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    int length, j, count;

    cin >> str1 >> str2;

    length = str1.length();

    j = length - 1;

    count = 0;

    for (int i = 0; i < length; i++) {
        if (str1[i] == str2[j]) {
            count++;
        }
        j--;
    }

    if (count == length) cout << "YES";
    else cout << "NO";
}

