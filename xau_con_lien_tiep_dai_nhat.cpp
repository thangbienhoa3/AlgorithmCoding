#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> se;
int my_cmp(const string &s1,const string &s2){
    if(s1.length() == s2.length()) return s1 < s2;
    return s1.length() < s2.length();
}
int main(){
    string s; cin >> s;
    int index = 0;
    while(index < s.length()){
        string tmp = "";
        while(s[index] != s[index + 1] && s[index + 1] != '\0'){
            tmp += s[index];
            index++;
        }
        tmp += s[index];
        index++;
        se.push_back(tmp);
    }
    sort(se.begin(),se.end(),my_cmp);
    cout << se[se.size()-1] << endl;
}