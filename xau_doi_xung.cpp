#include <iostream>
#include <string>
#include <deque>

using namespace std;
deque <char> de;
int main(){
    string s; cin >> s;
    for(int i = 0;i < s.length();i++){
        de.push_back(s[i]);
    }
    while(!de.empty()){
        if(de.front() != de.back()){
            cout << "NO" << endl;
            return 0;
            break;
        }
        de.pop_back();
        de.pop_front();
    }
    cout << "YES" << endl;

}