#include <iostream>

using namespace std;

int main()
{
    int n, count;
    string a, temp;
    cin >> n >> a;
    n--;

    temp = a;
    count = 1;

    while (n--) {
        cin >> a;

        if (temp == a) {

        }
        else {
            count++;
            temp = a;
        }
    }

    cout << count;
}

