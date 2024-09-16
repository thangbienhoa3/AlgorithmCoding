#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
map <string,int> mp;
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s,name = "",ngay_sinh = "";
        vector <string> Name,birth;
        getline(cin,s);
        for(int i = 0;i < s.length();i++){
            s[i] = tolower(s[i]);
            if(!isdigit(s[i]) && !isalpha(s[i])){
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            if(isdigit(tmp[0])){
                birth.push_back(tmp);
            }
            else Name.push_back(tmp);
        }
        name += Name[Name.size()-1];
        for(int i = 0;i < Name.size() - 1;i++){
            name += Name[i][0];
        }
        mp[name]++;
        if(mp.find(name) != mp.end() && mp[name] != 1){
            name += to_string(mp[name]);
        }
        name += "@xyz.edu.vn";
        for(int i = 0;i < birth.size();i++){
            if(birth[i][0] == '0'){
                ngay_sinh += birth[i][1];
            }
            else ngay_sinh += birth[i];
        }
        cout << name << endl;
        cout << ngay_sinh << endl;

    }   
}