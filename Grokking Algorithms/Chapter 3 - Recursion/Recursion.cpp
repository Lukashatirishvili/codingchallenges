#include <iostream>

using namespace std;


void countdown(int i) {
    cout << i << " ";

    if (i <= 0) {
        return;
    }
    else {
        countdown(i - 1);
    }
}

int main()
{
    int i = 3;
    countdown(i);
}

