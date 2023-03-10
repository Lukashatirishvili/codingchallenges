#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=He6ZUxt-iQ4&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=5

int a, b, c, d, f;

int main () {
    cin >> a >> b >> c;
    d = abs (a - c);
    f = abs (b - c);
    if (d <= f) cout << "1"; else cout << "2";
}
