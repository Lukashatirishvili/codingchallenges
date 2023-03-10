#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=3iv3kgHDpiM&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=4

int a, b, c;

int main() {
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b) cout << "true"; else cout << "false";
}
