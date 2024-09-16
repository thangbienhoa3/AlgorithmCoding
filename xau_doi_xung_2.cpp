#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    if(s == "9"){
        cout << "YES" << endl;
        return 0;
    }
    while(s.length() != 1){
        int sum = 0;
        for(int i = 0;i < s.length();i++){
            sum += s[i] - '0';
        }
        if(sum == 9){
            cout << "YES" << endl;
            return 0;
        }
        s = to_string(sum);
    }
    cout << "NO" << endl;
    
}