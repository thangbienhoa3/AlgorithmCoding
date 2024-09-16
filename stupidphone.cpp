#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;
string s;
int visted[100];
char res[100];
string d[100];
void print(){
    for(int i = 0;i < s.length();i++){
        cout << res[i];
    }
    cout << endl;
}
void input(){
    d[2] = "abc";
    d[3] = "def";
    d[4] = "ghi";
    d[5] = "jkl";
    d[6] = "mno";
    d[7] = "pqrs";
    d[8] = "tuv";
    d[9] = "wxyz";
}
void Try(int i){
    for(char c : d[s[i] - '0']){
        res[i] = c;
        if(i == s.length() - 1){
            print();
        }
        else Try(i+1);
    }
}
int main(){
    cin >> s;  
    sort(s.begin(),s.end());
    input();
    Try(0);
}