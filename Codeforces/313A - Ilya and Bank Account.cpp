#include <iostream>

using namespace std;

int main()
{
    int n, lastdigit, beforelast; cin >> n;

    lastdigit = n % 10;
    beforelast = (n / 10) % 10;

    int temp = (n / 100) * 10 + lastdigit;

    if (n >= 0) {
        cout << n;
    }

    else if (n < 0) {

         if (lastdigit > beforelast){
            cout << temp;
        }
        else if (lastdigit <= beforelast) {
            cout << n / 10;
        }
    }
}

