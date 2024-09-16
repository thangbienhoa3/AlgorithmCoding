#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    for(int i = 0;i < s.length();i++){
        s[i] = tolower(s[i]);
        if(!isalpha(s[i]) && !isdigit(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string tmp;
    vector <string> name;
    while(ss >> tmp){
        name.push_back(tmp);
    }
    cout << name[0];
    int i = 0;
    
    for(i = 0;i < name.size();i++){
        if(isalpha(name[i][0]) == 0){
            break;
        }
        cout << name[i][0];
    }
    cout << "@xyz.edu.vn" << endl;
    for(int j = i;j < name.size();j++){
        if(name[j][0] == '0'){
            cout << name[j][1];
            continue;
        }
        cout << name[j];
    }
    cout << endl;

}