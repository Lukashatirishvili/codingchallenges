#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;


    string a;
    cin >> a;
    n--;

    string t1, t2;
    t1 = a;

    int score1 = 1, score2 = 0;

    while (n--) {
        cin >> a;
        if (a == t1) {
            score1++;
        }
        else {
            t2 = a;
            score2++;
        }
    }

    if (score1 > score2) cout << t1;
    else cout << t2;

}
