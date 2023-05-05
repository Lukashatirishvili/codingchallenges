#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c; cin >> n;

    int sumA = 0, sumB = 0, sumC = 0;

    while (n--) {
        cin >> a >> b >> c;
        sumA += a;
        sumB += b;
        sumC += c;
    }

    if (sumA == 0 && sumB == 0 && sumC == 0) cout << "YES";
    else cout << "NO";
}

