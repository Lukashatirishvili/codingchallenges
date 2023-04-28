#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;

    int count = 0;

    while(t--) {
        cin >> a >> b >> c >> d;

        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;

        cout << count << " ";

        count = 0;
    }

}
