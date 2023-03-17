#include <iostream>;

using namespace std;
// https://www.aiasoft.ge/problem/87

int main() {
    int n; cin >> n;
    int a[n];

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << sum;

}
