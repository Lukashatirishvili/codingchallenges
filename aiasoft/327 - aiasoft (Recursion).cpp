#include <bits/stdc++.h>

using namespace std;

void oddnumbers (int i, int n) {
    cout << i << " ";

    if (i + 2 > n) {
        return;
    }
    else {
        oddnumbers(i + 2, n);
    }
}

int main() {

    int n; cin >> n;
    int i = 1;
    oddnumbers(i, n);
}
