#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s;
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
        cout << Name[Name.size()-1];
        for(int i = 0;i < Name.size() - 1;i++){
            cout << Name[i][0];
        }
        cout << "@xyz.edu.vn" << endl;
        for(int i = 0;i < birth.size();i++){
            if(birth[i][0] == '0'){
                cout << birth[i][1];
            }
            else cout << birth[i];
        }
        cout << endl;
    }   
}