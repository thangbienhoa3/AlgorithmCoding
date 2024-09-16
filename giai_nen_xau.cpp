#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s,res; cin >> s;
    string num = "";
    char c;
    for(int i = 0;i < s.length();i++){
        if(isdigit(s[i])){
            num.push_back(s[i]);
            if(isalpha(s[i-1])){
                c = s[i-1];
            }
            if(!isdigit(s[i+1])){
                for(int j = 0;j < stoll(num);j++){
                    res.push_back(c);
                }
                num = "";
            }
        }
    }
    cout << res << endl;
}