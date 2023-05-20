#include <iostream>

using namespace std;

int main()
{
    int n, x, y, xi, yi;
    cin >> n;
    n++;
    int levels[n];
    levels[0] = 0;

    for (int i = 1; i < n; i++) {
        levels[i] = i;
    }

    cin >> x;
    while(x--) {
        cin >> xi;
        for (int i = 1; i < n; i++) {
            if (levels[i] == xi) {
                levels[i] = 0;
            }
        }
    }

    cin >> y;
    while(y--) {
        cin >> yi;
        for (int i = 1; i < n; i++) {
            if (levels[i] == yi) {
                levels[i] = 0;
            }
        }
    }

    string result = "I become the guy.";

    for (int i = 1; i < n; i++) {
        if (levels[i] != 0) {
            result = "Oh, my keyboard!";
            break;
        }
    }

    cout << result;

}

