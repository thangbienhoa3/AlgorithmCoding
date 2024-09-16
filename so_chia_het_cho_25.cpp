#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s,tmp = ""; cin >> s;
    int a;
    if(s == "0"){
        cout << "YES" << endl;
    }
    else if(s.length() >= 2){
        for(int i = s.length() - 2;i < s.length();i++){
            tmp += s[i];
        }
        a = stoll(tmp);
        if(a % 25 == 0 || a == 0){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}