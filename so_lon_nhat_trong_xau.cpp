#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
int my_cmp(const string &s1,const string &s2){
    if(s1.length() == s2.length()) return s1 < s2;
    return s1.length() < s2.length();
}
vector <string> v;
int main(){
    string s; cin >> s;
    long long int index = 0;
    while(index < s.length()){
        string tmp = "";
        int cnt = 0;
        while(isdigit(s[index])){
            if(s[index] == '0' && cnt == 0){
                tmp += '0';
                break;
            }
            tmp += s[index];
            index++;
            cnt++;
        }
        index++;
        if(!tmp.empty()){
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end(),my_cmp);
    cout << v[v.size()-1] << endl;
}