#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=aLWTEZzgJjA&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=6

int main () {
    int n; cin >> n;
    int s = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 ) {
            s++;
        }
    }
        cout << s;
}
