#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/247

int main() {
    int x; cin >> x;

    int first = x / 10;
    int second = x % 10;
    if (first > second) {
        cout << first;
    } else cout << second;
}
