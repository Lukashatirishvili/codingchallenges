#include <iostream>

using namespace std;

int main()
{
    long long n, k, result, mid;
    cin >> n >> k;

    mid = (n % 2 == 1) ? n / 2 + 1 : n / 2;

    if (k <= mid) result = k * 2 - 1;

    if (k > mid) result = (k - mid) * 2;

    cout << result;
}

