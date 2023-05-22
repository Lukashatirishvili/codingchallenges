#include <iostream>

using namespace std;

int main()
{
    int n, a, count, t1, t2, t3;
    cin >> n;

    count = 0;
    t1 = 0;
    t2 = 0;
    t3 = 0;

    while (n--) {
        cin >> a;

        if (a == 4) {
            count++;
        }

        if (a == 1) t1++;
        if (a == 2) t2++;
        if (a == 3) t3++;
    }

    while (t1 > 0) {
        if (t3 == 0) {
            break;
        }
        t1--;
        t3--;
        count++;

    }

    while (t2 > 0) {
        if (t1 < 1) {
            break;
        }
        t1 -= 2;
        t2--;
        count++;
        if (t1 == -1) {
            t1 = 0;
        }
    }

    while (t1 > 0) {
        t1 -= 4;
        count++;
        if (t1 < 0) {
            t1 = 0;
        }
    }

    if (t2 % 2 == 0) t2 = t2 / 2;
    else {
        t2--;
        count++;
        t2 = t2 / 2;
    }

    t1 = (t1 / 4) + (t1 % 4);


    cout << count + t1 + t2 + t3;
}

