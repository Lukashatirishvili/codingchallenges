#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=8leVOw9LsEs&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=3

int x, y, z;

int main() {
    cin>>x;
    y = (x/10)*(x%10);
    z = (x/100)*(x%100);
    if(y>z) cout<<y; else cout<<z;
}
