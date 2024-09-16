#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string res = "",s1,s2;
        cin >> s1 >> s2;
        if(s1.length() > s2.length()){
            swap(s1,s2);
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int reminder = 0;
        for(int i = 0;i < s1.length();i++){
            int sum = (s1[i] - '0') + (s2[i] - '0') + reminder;
            res.push_back(sum % 10 + '0');
            reminder = sum / 10;
        }
        for(int i = s1.length();i < s2.length();i++){
            int sum = (s2[i] - '0') + reminder;
            res.push_back(sum % 10 + '0');
            reminder = sum / 10;
        }
        if(reminder){
            res.push_back(reminder + '0');
        }
        reverse(res.begin(),res.end());
        cout << res << endl;
    }
}