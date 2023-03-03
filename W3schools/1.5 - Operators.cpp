#include <iostream>;

using namespace std;

int main() {
    // Addition and Subtraction operator
    int x = 100 + 50;
    int y = x + 35;
    int sum = x + y;

    // Assignment operator
    x = 60;
    sum = y;

    // Addition assignment operator which adds a value to a variable
    x += 5;
    y += x;
    cout << x << endl << y << endl << sum << endl;

    // Comparison operator
    bool comparison = x > y;
    cout << comparison << endl;

    // Logical operators
    bool example1 = x < y && sum > x;
    cout << example1 << endl;

    bool example2 = sum > y || y > x;
    cout << example2 << endl;

    bool example3 = !(sum > y || y > x);
    cout << example3;
}
