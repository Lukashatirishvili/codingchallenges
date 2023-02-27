#include <iostream>;

using namespace std;

int x, y;

int main() {
    cin>>x;
    y=x/10+x%10;

    if(x%y==0) cout<<"YES"; else cout<<"NO";
}
