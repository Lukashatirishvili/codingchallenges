#include <iostream>;

using namespace std;

int main () {
    int x;
    int n; cin >> n;
    for (int i = -1; i < n - 1; i++) {
        x = i + 2;
       if (x % 2 == 1) cout << x << " ";
    }
}

