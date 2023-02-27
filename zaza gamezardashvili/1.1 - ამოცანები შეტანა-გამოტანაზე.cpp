#include <iostream>

using namespace std;

int x, y, z, k;

int main() {
  cin >>x>>y>>z>>k;
  cout << y%x+z%x+k%x;
}
