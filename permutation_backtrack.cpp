#include <iostream>
#include <set>
using namespace std;
string s;
char res[1000]; 
int a[1000] = {0};
set <string> se;
void printsol(){
    string tmp;
    for(int i = 0;i < s.length();i++){
        tmp.push_back(res[i]);
    }
    if(se.find(tmp) == se.end()){
        cout << tmp << endl;
    }
    se.insert(tmp);
}
void permutation(int k){
    if(k == s.length()){
        printsol();
        return;   
    }
    for(int i = 0;i < s.length();i++){
        if(a[i] == 0){
            res[k] = s[i];
            a[i] = 1;
            permutation(k+1);
            a[i] = 0;
        }
    }
    
}
int main(){
    cin >> s;
    permutation(0);
}