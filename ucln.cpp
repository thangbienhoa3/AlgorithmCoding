#include <iostream>
#include <string>
typedef long long int lld;
using namespace std;

lld gcd(lld a,lld b){
    if(a == 0) return b;
    else return gcd(b % a,a);
}
int main(){
    lld m;
    string n;
    lld num = 0;
    cin >> n >> m;
    for(int i = 0;i < n.length();i++){
        num = (num * 10 + n[i] - '0') % m;
    }
    cout << num << endl;
    cout << gcd(m,num) << endl;
}