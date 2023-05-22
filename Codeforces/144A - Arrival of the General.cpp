#include <iostream>

using namespace std;

int main()
{
    int n, indexMax, indexMin;
    cin >> n;
    n++;

    int arr[n];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }

    long long min = INTMAX_MAX;
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            indexMax = i;
        }
        if (arr[i] <= min) {
            min = arr[i];
            indexMin = i;
        }
    }


    int result = indexMax - 1 + (n - 1) - indexMin;

    if (indexMax > indexMin) {
        result--;
    }

     cout << result;

}

