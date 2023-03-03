#include <iostream>;

using namespace std;

int main() {
    string greeting = "Hello";

    // String concatenation
    string firstName = "John ";
    string lastName = "Smith";
    string fullName = firstName + lastName;
    cout << fullName << endl;
    fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // Append function
    fullName = firstName.append(lastName);
    cout << fullName << endl;

    // String length
    string txt = "Hello World";
    cout << "The length of txt string is: " << txt.length() << endl;

    // Access strings
    string myString = "Hello";
    cout << myString[1] << endl;

    // User input string
    string fullname;
    cout << "Type your first and last Name: ";
    getline (cin, fullname);
    cout << fullname;

}
