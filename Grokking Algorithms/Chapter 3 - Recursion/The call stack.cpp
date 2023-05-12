#include <iostream>

using namespace std;

void greet (string name);
void greet2 (string name);
void bye();

void greet (string name) {
    cout << "Hello " + name << endl;
    greet2(name);
    cout << "getting ready to say bye..." << endl;
    bye();
}

void greet2(string name) {
    cout << "How are you " + name << endl;
}

void bye() {
    cout << "Ok bye";
}

int main()
{
    string name = "Jordan";

    greet(name);
}

