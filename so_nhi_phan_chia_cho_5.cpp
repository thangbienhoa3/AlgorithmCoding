#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string s; cin >> s;
    long long int cnt = 0;
    long long int mod = 0;
    for(int i = 0;i < s.length();i++){
        mod = 2 * mod + s[i] - '0';
        if(mod >= 3){
            mod -= 3;
        }
    }
    if(!mod){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}