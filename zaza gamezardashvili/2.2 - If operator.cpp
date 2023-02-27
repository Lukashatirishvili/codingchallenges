#include <iostream>;

using namespace std;

int x, y, z;

int main() {
    cin>>x;
    y = (x/10)*(x%10);
    z = (x/100)*(x%100);
    if(y>z) cout<<y; else cout<<z;
}
