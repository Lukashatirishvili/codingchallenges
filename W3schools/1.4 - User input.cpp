#include <iostream>;

using namespace std;

int main() {
    int x;

    /*
    cout << "Type number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value
    */

    // Add input numbers
    int a, b;
    int sum;
    cout << "Type number: ";
    cin >> a;
    cout << "Type another number ";
    cin >> b;
    sum = a + b;
    cout << "Sum is: " << sum;
}
