#include <iostream>;

using namespace std;

int a, b, c, d, f;

int main () {
    cin >> a >> b >> c;
    d = abs (a - c);
    f = abs (b - c);
    if (d <= f) cout << "1"; else cout << "2";
}
