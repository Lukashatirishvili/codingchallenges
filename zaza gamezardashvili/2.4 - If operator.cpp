    #include <iostream>;

    using namespace std;

    long long v, n;

    int main() {
        cin >> v >> n;
        if (n * 3 > v) cout << "YES " << n - v / 3; else cout << "NO";
    }
