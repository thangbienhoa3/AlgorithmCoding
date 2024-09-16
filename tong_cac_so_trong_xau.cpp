#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    long long int sum = 0;
    for(int i =0;i < s.length();i++){
        string tmp = "";
        tmp += s[i];
        sum += stoll(tmp);
    }
    cout << sum << endl;
}