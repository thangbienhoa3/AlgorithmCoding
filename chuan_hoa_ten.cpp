#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;
vector <string> name,birth;
int main(){
    string s,s1,tmp,tmp1;
    getline(cin,s);
    getline(cin,s1);
    for(int i = 0;i < s.length();i++){
        s[i] = tolower(s[i]);
    }
    for(int i = 0;i < s1.length();i++){
        if(isalpha(s1[i]) == 0 && isdigit(s1[i]) == 0){
            s1[i] = ' ';
        }
    }
    stringstream ss(s);
    stringstream ss1(s1);
    while(ss >> tmp){
        name.push_back(tmp);
    }
    while(ss1 >> tmp1){
        birth.push_back(tmp1);
    }
    for(int i = 0;i < name.size();i++){
        name[i][0] = toupper(name[i][0]);
        cout << name[i] << ' ';
    }
    for(int i = 0;i < birth.size();i++){
        if(stoll(birth[i]) < 10){
            birth[i] = '0'  + birth[i];
        }
    }
    cout << endl;
    for(int i = 0;i < birth.size();i++){
        if(i == birth.size() - 1){
            cout << birth[i] << endl;
        }
        else cout << birth[i] << "/";
    }
}