#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s; cin >> s;
    char num[2];
    if(s.length() >= 2){
        num[0] = s[s.length()-2];
        num[1] = s[s.length()-1];
    }
    else if(s.length() == 1){
        num[0] = s[0];        
    }
    int x = atoi(num);
    if(x % 4 == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}