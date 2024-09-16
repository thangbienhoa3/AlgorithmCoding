#include <iostream>
#include <string>
using namespace std;

const int n = 1e6;
int main(){
    int a[n];
    string s,res = "";
    cin >> s;
    a[0] = 1;
    for(int i = 1;i <= s.length();i++){
        if(s[i] == s[i-1]){
            a[i] = a[i-1] + 1;
        }
        else{
            a[i] = 1;
            res.push_back(s[i-1]);
            res.push_back(a[i-1] + '0');
        }
    }
    cout << res << endl;
}