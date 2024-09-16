#include <iostream>
#include <string>
typedef long long int lld;
using namespace std;

lld gcd(lld a,lld b){
    if(a == 0) return b;
    else return gcd(b % a,a);
}
int main(){
    lld x,y,a;
    cin >> a >> x >> y;
    lld num = gcd(x,y);
    for(int i = 0;i < num;i++){
        cout << a;
    }
    cout << endl;
}