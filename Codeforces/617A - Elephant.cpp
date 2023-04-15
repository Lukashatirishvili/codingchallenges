
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    int five = 5;

    int result = 0;
    int count = 0;

    while (result < x) {
        if (x >= five) {
            result += five;
        }
        else if (x < five && x > three) {
            result += four;
        }
        else if (x < four && x > two) {
            result += three;
        }
        else if (x < three && x > one) {
            result += two;
        }
        else if (x < two && x > 0) {
            result += one;
        }
        count++;
    }

    cout << count;

}

