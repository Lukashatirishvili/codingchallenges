#include <iostream>;

using namespace std;
// https://informatics.ge/problem/226

int x, c, v, b;

int main () {
    cin>>x>>c>>v>>b;
    cout<<c%x+v%x+b%x;
}
