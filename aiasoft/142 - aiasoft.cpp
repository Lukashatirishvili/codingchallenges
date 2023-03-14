#include <iostream>;

using namespace std;

int main() {
    int m; cin >> m;
    int n; cin >> n;
    int k[n];

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    int sum = 0;
    int j;

    for (int i = 0; i < n; i++) {
        sum = sum + k[i];
        if (sum > m) {
            j = i;
            break;
        } else j = n;

    }
    cout << j;

}
