#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s; cin >> s;
    int sum = 0;
    for(int i = 0;i < s.length();i++){
        sum += s[i];
    }
    if(sum % 3 == 0 && (s[s.length()-1] == '0' || s[s.length()-1] == '5')){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}