#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/331

int main () {
    int n; cin >> n;
    for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) cout << i << " ";
    }
}
