#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    char temp;


    while (t--) {
        for (int j = 0; j < n; j++) {
            if (str[j] == 'B' && str[j + 1] == 'G') {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                j++;
            }
        }
    }

    cout << str;
}

