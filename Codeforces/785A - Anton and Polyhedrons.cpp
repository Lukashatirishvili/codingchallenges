#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;

    string str;

    sum = 0;

    while (n--) {
        cin >> str;

        if (str == "Tetrahedron") sum += 4;
        if (str == "Cube") sum += 6;
        if (str == "Octahedron") sum += 8;
        if (str == "Dodecahedron") sum += 12;
        if (str == "Icosahedron") sum += 20;

    }

    cout << sum;
}

