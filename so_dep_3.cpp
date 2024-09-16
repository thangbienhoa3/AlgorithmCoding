#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int check1 = 1,check2 = 1;
    for(int i = 0;i < s.length() - 1;i++){
        if(s[i+1] < s[i]){
            check1 = 0;
            break;
        }
    }
    for(int i = 0;i < s.length() - 1;i++){
        if(s[i+1] > s[i]){
            check2 = 0;
            break;
        }
    }
    if(check1 || check2){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}