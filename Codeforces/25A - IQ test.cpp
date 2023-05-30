#include <iostream>

using namespace std;

int main()
{
    int n, index_even, index_odd, count_even, count_odd;
    count_even = 0;
    count_odd = 0;

    cin >> n;

    int arr[n];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            index_even = i;
            count_even++;
        }
        else {
            index_odd = i;
            count_odd++;
        }
    }

    if (count_even > count_odd) cout << index_odd;
    else cout << index_even;

}

