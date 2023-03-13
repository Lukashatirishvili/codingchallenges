#include <iostream>;

using namespace std;
// https://www.w3schools.com/cpp/cpp_for_loop.asp

int main() {

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    cout << endl;

    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << "\n";
    }

    cout << endl;

    // Nested loops
    for (int i = 1; i <= 2; i++) {
        cout << "Outer: " << i << "\n";

         for (int i = 1; i <= 3; i++) {
            cout << "Inner: " << i << "\n";
         }
    }

    // For each loop
    int myNumbers[5] = {20, 25, 33, 41, 46};
    for ( int i : myNumbers) {
        cout << i << " ";
    }
}
