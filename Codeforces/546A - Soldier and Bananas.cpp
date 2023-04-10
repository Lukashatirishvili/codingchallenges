#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int temp = 0;
    int sumPrice = 0;

    for (int i = 1; i <= w; i++) {
        temp += k;
        sumPrice += temp;
    }

    if (sumPrice > n) cout << sumPrice - n;
    else cout << 0;
}

