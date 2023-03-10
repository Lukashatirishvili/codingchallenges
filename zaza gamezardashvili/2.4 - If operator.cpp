    #include <iostream>;

    using namespace std;
    // https://www.youtube.com/watch?v=He6ZUxt-iQ4&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=5

    long long v, n;

    int main() {
        cin >> v >> n;
        if (n * 3 > v) cout << "YES " << n - v / 3; else cout << "NO";
    }
