#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector <string> s;
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        string tmp; cin >> tmp;
        s.push_back(tmp);
    }
    sort(s.begin(),s.end());
    for(int i = 0;i < n;i++){
        cout << s[i] << ' ';
    }
    cout << endl;
    sort(s.begin(),s.end(),greater<string>());
    for(int i = 0;i < n;i++){
        cout << s[i] << ' ';
    }
    cout << endl;
}