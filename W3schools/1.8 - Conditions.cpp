#include <iostream>;

using namespace std;

int main () {
    // if statement
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }

    int x = 11;
    int y = 7;
    if (x > y) {
        cout << "x is greater than y" << endl;
    }

    // else statement
    int time = 18;
    if (time < 18) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }

    // else if statement
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }

    // Ternary Operator
    string result = (time > 18) ? "Good day" : "Good evening";
    cout << result;
}
