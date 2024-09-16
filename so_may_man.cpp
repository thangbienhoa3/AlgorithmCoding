#include <iostream>
#include <string>

using namespace std;

int main(){
    string s,res; cin >> s;
    
    while(1){
        size_t found = s.find("111");
        if(found != string::npos){
            string tmp1 = s.substr(0,found);
            string tmp2 = s.substr(found + 3,s.length() - 1);
            s = tmp1 + tmp2;
        }
        else break;
    }
    if(s.empty()) cout << "EMPTY" << endl;
    else
    cout << s << endl;
}