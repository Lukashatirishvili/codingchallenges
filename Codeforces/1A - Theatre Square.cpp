#include <iostream>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long sizeN, sizeM;

    if (n % a > 0) sizeN = n / a + 1;
    else sizeN = n / a;

    if (m % a > 0) sizeM = m / a + 1;
    else sizeM = m / a;

    long long flagStone = sizeN * sizeM;

    cout << flagStone;
}
