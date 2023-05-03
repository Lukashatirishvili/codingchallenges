#include <iostream>

using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    int length = inputString.length() / 2 + 1;
    char array_Char[length];

    int j = 0;

    for (int i = 0; i < length; i++) {
        array_Char[i] = inputString[j];
        j += 2;
    }

    char temp;
     for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array_Char[i] > array_Char[j]) {
                temp = array_Char[i];
                array_Char[i] = array_Char[j];
                array_Char[j] = temp;
            }
        }
    }

    string result;

    for (int i = 0; i < length; i++) {
        result += array_Char[i];
        result += "+";
    }

     result.pop_back();

    cout << result;
}

