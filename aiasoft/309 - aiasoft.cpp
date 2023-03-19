#include <iostream>;

using namespace std;

int main() {
    int n; cin >> n;

    int n1, n2;

    n1 = (n / 10) % 10;
    n2 = (n / 100) % 10;


    int sum = n1 + n2;

    cout << sum;
}
