#include <iostream>

using namespace std;

int main()
{
    int n, p; cin >> n;
    double sum, drinks, result;

     sum = 0;
     drinks = n;

    while (n--) {
        cin >> p;
        sum += p;
    }

    result = sum / drinks;

    cout << result;
}

