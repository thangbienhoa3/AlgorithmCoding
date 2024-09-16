#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s,tmp = ""; cin >> s;
    int sum = 0;
    for(int i = 0;i < s.length();i++){
        sum += s[i];
    }
    if(sum % 3 == 0 && int(s[s.length() - 1]) % 2 == 0){
        cout << "YES" << endl;
    } 
    else cout << "NO" << endl;
}