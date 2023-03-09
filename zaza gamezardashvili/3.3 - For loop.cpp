#include <iostream>;

using namespace std;

// https://www.youtube.com/watch?v=tleXnyuIx4c&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=7&t=357s

int main () {
    int n;
    int mx;
    cin >> n >> mx;
    int a;

    for (int i = 1; i < n; i++) {
        cin >> a;
        if (mx < a) mx = a;
    }

    cout << mx;

}
