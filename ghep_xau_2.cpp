#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
vector <string> v;
string res;
int cmpnum(const string v1,const string v2){
    if(v1.length() == v2.length()){
        return v1 < v2;
    }
    else return v1.length() < v2.length();
}
int my_cmp(const string v1,const string v2){
    return 
}
int main(){
    string s; cin >> s;
    for(int i = 0;i < s.length();i++){
        string tmp = "";
        while(isdigit(s[i])){
            tmp += s[i];
            i++;
        }
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++){
        cout << v[i];
    }
    cout << endl;
}