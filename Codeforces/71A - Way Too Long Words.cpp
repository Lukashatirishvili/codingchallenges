#include <iostream>
using namespace std;

string wordReplacer(string word) {
    int length = word.length();

    if (length > 10) {
        return word[0] + to_string(length - 2) + word[length - 1];
    } else {
        return word;
    }
}

int main() {
    int n;
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        string word = arr[i];
        string result = wordReplacer(word);

        cout << result << endl;
    }

}

