#include <iostream>

using namespace std;

int main(){
    string s;
    long long int m,mod = 0;
    cin >> s >> m;
    for(int i = 0;i < s.length();i++){
        mod = mod * 10 + s[i] - '0';
        mod %= m;
    }
    cout << mod << endl;
}