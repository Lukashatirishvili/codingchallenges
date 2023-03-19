#include <iostream>;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int i, length;

    if (a > b) {
        length = a;
        i = b;
    }
    else {
        length = b;
        i = a;
    }

    while (i <= length) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
        i++;
    }
}
