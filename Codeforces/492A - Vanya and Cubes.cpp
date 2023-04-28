#include <iostream>

using namespace std;

int main()
{
    int n, counter, tempsum, finalsum, i; cin >> n;

    counter = 1;
    tempsum = 1;
    finalsum = 0;
    i = 2;

    while (tempsum < n) {
        tempsum += i;

        if (tempsum + finalsum >= n) {
            break;
        }

        finalsum += tempsum;
        i++;
        counter++;
    }

    cout << counter;
}

