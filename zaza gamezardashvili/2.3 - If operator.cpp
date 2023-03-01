#include <iostream>;

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b) cout << "true"; else cout << "false";
}
