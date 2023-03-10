#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=aLWTEZzgJjA&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=6

int main () {
    int a, b; cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
        }
    }
    cout << sum;
}

