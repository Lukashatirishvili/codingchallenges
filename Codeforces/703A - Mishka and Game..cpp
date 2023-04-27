#include <iostream>

using namespace std;

int main()
{
    int n, a, b, p1 = 0, p2 = 0; cin >> n;

    while (n--) {
        cin >> a >> b;
        if (a > b) p1++;
        if (a < b) p2++;
    }

    if (p1 > p2) cout << "Mishka";
    else if (p1 < p2) cout << "Chris";
    else if (p1 == p2) cout << "Friendship is magic!^^";
}

