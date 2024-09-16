#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    int check = 1,cnt_6 = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '6') cnt_6++;
        if(s[i] != s[s.length()-i-1]){
            check = 0;
            break;
        }
    }
    if(cnt_6 && check){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}