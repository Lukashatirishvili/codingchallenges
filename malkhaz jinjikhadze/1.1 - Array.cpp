#include <iostream>;

using namespace std;

int main() {
    int a[5];

    a[0] = 3;
    a[4] = a[0] + a[3];
    int k = 0;
    a[k] = 9;
    a[k+2] = a[k] + 3;

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    int n = 10, b[10];

    for (int i= 0; i < n; i++) {
        b[i] = i * i;
    }

    for (int i= 0; i < n; i++) {
        cout << b[i] << " ";
    }

}
