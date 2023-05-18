#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    n--;

    string result = "I hate";
    temp = 2;

    while (n--) {

        if (temp % 2 == 0) {
            result += " that I love";
        }
        else if (temp % 2 == 1) {
            result += " that I hate";
        }
        temp++;

    }

    result += " it";

    cout << result;

}

