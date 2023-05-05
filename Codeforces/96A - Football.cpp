#include <iostream>

using namespace std;

int main()
{
    string str; cin >> str;

    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[i + 1]) {
            count++;
        }
        else count = 0;

        if (count >= 6) {
            break;
        }
    }

    count += 1;

    if (count >= 7) cout << "YES";
    else cout << "NO";
}

