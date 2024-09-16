#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;
map <string,int> mp;
int main(){
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    int found = s.find(s1);
    if(found != string::npos){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


}