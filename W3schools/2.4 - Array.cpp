#include <iostream>;

using namespace std;
// https://www.w3schools.com/cpp/cpp_arrays.asp

int main() {
    string cars[4] = {"BMW", "Audi", "Volvo", "Acura"};

    int num[3] = {4, 5, 1};

    // Access elements of array
    cout << cars[2] << endl;
    cars[2] = "Ferrari";

    // Loop Through an Array
    for (int i = 0; i < 4; i++) {
        cout << cars[i] << " ";
    }

    cout << endl;
    // The for each Loop
    for (string i : cars) {
        cout << i << " ";
    }

    // Omit array size
    string cities[] = {"London", "Las vegass", "Manchester"};

    cout << endl;
    // Get the size of an array
    int mynumbers[] = {44, 33, 14, 53, 23};

    cout << sizeof(mynumbers) << endl; //   this return size of a type in bytes

    // Get length of array

    int arraylength = sizeof(mynumbers) / sizeof(int);
    cout << arraylength << endl;

    // Multi-Dimensional Arrays
    string uefa[2][4] = {
        {"Manchester", "Juve", "Roma", "Arsenal"},
        {"Chelsea", "Real Madrid", "Milan", "Inter"}
    };

    uefa[0][1] = "Real betis";
    cout << uefa[0][1] << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; i < 4; j++) {
            cout << uefa[i][j] << " ";
        }
    }

}
