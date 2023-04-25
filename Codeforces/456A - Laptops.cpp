#include <iostream>

using namespace std;

int main()
{
    int n, a, b; cin >> n;

    string result;

    while(n--) {
        cin >> a >> b;


        if (a == b) {
            result = "Poor Alex";
        }
        else {
            result = "Happy Alex";
            break;
        }

    }
        cout << result;

}

