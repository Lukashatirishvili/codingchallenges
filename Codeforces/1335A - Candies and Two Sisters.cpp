#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;


    while (t--) {
        cin >> n;

        if (n == 2 || n == 1) cout << 0 << endl;
        else cout << (n - 1) / 2 << endl;
    }
}
