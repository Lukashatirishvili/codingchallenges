#include <iostream>

using namespace std;

int main()
{
    string str1, str2, concatedStr, mainStr;
    cin >> str1 >> str2 >> mainStr;

    concatedStr = str1 + str2;
    int length = concatedStr.length();

    char concatedArr[length];
    char mainArr[mainStr.length()];

    for (int i = 0; i < length; i++) {
        concatedArr[i] = concatedStr[i];
    }

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (concatedArr[i] > concatedArr[j]) {
                char temp = concatedArr[i];
                concatedArr[i] = concatedArr[j];
                concatedArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < mainStr.length(); i++) {
        mainArr[i] = mainStr[i];
    }

    for (int i = 0; i < mainStr.length(); i++) {
        for (int j = i + 1; j < mainStr.length(); j++) {
            if (mainArr[i] > mainArr[j]) {
                char temp = mainArr[i];
                mainArr[i] = mainArr[j];
                mainArr[j] = temp;
            }
        }
    }

    bool result = false;
    int finalLength = (length > mainStr.length()) ? length : mainStr.length();
    for (int i = 0; i < finalLength; i++) {
        if (concatedArr[i] == mainArr[i]) {
            result = true;
        }
        else {
            result = false;
            break;
        }
    }

    if (result == true) cout << "YES";
    else cout << "NO";
}

