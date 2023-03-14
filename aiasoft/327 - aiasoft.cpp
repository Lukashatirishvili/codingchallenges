#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/327

int main () {
    int x;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        x = i + 1;
        if (x % 2 == 1) {
        cout << x << " ";
        }
    }     
}
