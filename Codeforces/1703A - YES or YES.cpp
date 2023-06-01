#include <iostream>

using namespace std;

string lower (string str) {
    string lowerstr;
    for (int i = 0; i < str.length(); i++) {
        char x = str[i];
        lowerstr += tolower(x);
    }

    return lowerstr;
}

int main()
{
    int n; cin >> n;
    string str;
    string result;

    while (n--) {
        cin >> str;
        result = lower(str);

        if (result == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

