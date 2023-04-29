#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int result = n;

    while(k--) {

        if (result % 10 > 0) {
            result--;
        }
        else if (result % 10 == 0) {
            result = result / 10;
        }


    }

    cout << result;

}

