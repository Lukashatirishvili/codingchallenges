#include <iostream>

using namespace std;

int main()
{
    string str, hello;
    cin >> str;

    hello = "hello";

    int k = 0;
    bool result = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == hello[k]) {
            k++;
            if (k == 5) {
                result = true;
                break;
            }
        }
    }

    if (result) cout << "YES";
    else cout << "NO";
}
