#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2; cin >> n;

    char x;

    p1 = 0;
    p2 = 0;

    while (n--) {
        cin >> x;

        if (x == 'A') {
            p1++;
        }
        if (x == 'D') {
            p2++;
        }
    }

    if (p1 > p2) cout << "Anton";
    else if (p1 < p2) cout << "Danik";
    else cout << "Friendship";
}
