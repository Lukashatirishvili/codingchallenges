#include <iostream>;

using namespace std;

int main () {
    // Find minimum in Odd numbers
     int n = 10, a[n] = {3, 5, 2, 5, 8, 9, 11, 6, 11, 1};

     int j = 0;
     for (int i = 0; i < n; i++) {
        if(a[i] % 2 == 1)
        if(a[i] < a[j]) j = i;
     }
     cout << a[j];
}
