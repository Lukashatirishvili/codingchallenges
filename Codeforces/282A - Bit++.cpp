#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int x = 0;
    string opertion;

    while(n--) {
        cin >> opertion;

        if (opertion == "++X" || opertion == "X++") {
            x++;
        }
        if (opertion == "--X" || opertion == "X--") {
            x--;
        }
    }

    cout << x;
}

