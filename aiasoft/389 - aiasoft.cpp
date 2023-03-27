#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int x = 0;
    int i = 1;

    while (i < n) {
        if (n % i == 0) x += i;
        i++;
    }

    if (x == n) cout << "yes";
    else cout << "no";

}
