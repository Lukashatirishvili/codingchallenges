#include <iostream>;

using namespace std;

int main() {
    int x; cin >> x;

    int first = x / 10;
    int second = x % 10;
    if (first > second) {
        cout << first;
    } else cout << second;
}
