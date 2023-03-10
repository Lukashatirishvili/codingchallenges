#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=uTRYxqhWzlQ&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=2

int x, c, v, b;

int main () {
    cin>>x>>c>>v>>b;
    cout<<c%x+v%x+b%x;
}
