#include <iostream>

using namespace std;

int main(){
    string s; cin >> s;
    for(int i = s.length() - 1;i >= 0;i--){
        if(s[i] == '1'){
            s[i] = '0';
        }
        else {
            s[i] = '1';
            break;
        }
    }
    cout << s << endl;
}