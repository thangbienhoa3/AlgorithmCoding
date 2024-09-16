#include <iostream>

using namespace std;
typedef long long int lld;
const lld m = 100;
const lld N = 1e6 + 7;

int main(){
    lld b,res = 1; cin >> b;
    lld a = 0;
    string s = "17823812381838123818238123812371273172371237172371238128317564719259123812318231623712381231318231239123812831823126412412428";
    for(int i = 0;i < s.length();i++){
        a = (a * 10 + s[i] - '0') % m;
    }
    while(b > 0){
        if(b & 1){
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    cout << res << endl;
}