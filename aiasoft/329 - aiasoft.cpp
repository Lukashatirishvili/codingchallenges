#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/329

int main() {
    int n; cin >> n;

    int odds;

    for (int i = n; i > 0; i--) {
        if (i % 2 == 1) {
            odds = i;
            cout << odds << " ";
        }
    }

}

