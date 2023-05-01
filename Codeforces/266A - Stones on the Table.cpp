#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string colors;
    cin >> colors;

    int count = 0;
    int temp = 0;


     for (int i = 0; i < n; i++) {
         if (colors[i] == colors[i + 1]) {
             count++;
         }

         if (count > temp) temp = count;
         else if (count < temp) count = temp;
     }

     cout << count;

}

