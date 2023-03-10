#include <iostream>;

using namespace std;
// https://www.youtube.com/watch?v=8leVOw9LsEs&list=PLJTvi6Vq8-z8GgVyxJq7dTnuFxSFPYVcJ&index=3

int x, y;

int main() {
    cin>>x;
    y=x/10+x%10;

    if(x%y==0) cout<<"YES"; else cout<<"NO";
}
