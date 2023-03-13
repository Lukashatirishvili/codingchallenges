#include <iostream>;

using namespace std;
// https://www.w3schools.com/cpp/cpp_break.asp

int main() {
    // Break
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << " ";
    }

    cout << endl;

    // Continue
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << " ";
    }

    cout << endl;

    // Break and Continue in While loop
    int i = 0;
    while (i < 10) {
        cout << i << " ";
        i++;
        if (i == 4) {
            break;
        }
    }

    cout << endl;

    i = 0;
    while(i < 10) {
        cout << i << " ";
        i++;
        if (i == 4) {
            i++;
            continue;
        }
    }
}
