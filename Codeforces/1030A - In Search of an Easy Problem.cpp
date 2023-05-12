#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    string result;

    while (n--) {
        cin >> a;
        if (a == 0) {
            result = "EASY";
        }
        else {
            result = "HARD";
            break;
        }
    }

    cout << result;
}

