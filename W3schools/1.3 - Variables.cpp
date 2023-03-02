#include <iostream>;

using namespace std;

int main() {
    int myNum = 4; // Integer (Whole number without decimals)
    double myFloatnum = 7.3; // Floating point number (with decimals)
    char* myLetter = "f"; // Character (only one letter)
    string myText = "Developer"; // String (text)
    bool myboolean = true; // Boolean (true or false)

    // Display (Output) variables
    cout << myFloatnum << endl;
    cout << "Your answer is " << myboolean << endl;

    // Add variables
    cout << myNum + myFloatnum << endl;

    int x = 5;
    int y = 3;
    int sum = x + y;
    cout << sum << endl;

    // Declare many variables
    int a = 3, b = 6, c = 1;
    cout << a + b + c << endl;

    // Assign the same value to multiple variables in one line
    int w, e, r;
    w = e = r = 30;
    cout << w + e + r << endl;

    // Constants
    const int birthYear = 1992; // birthYear always will be 1992
}
