#include <iostream>
#include <string>
#include <set>
using namespace std;
typedef long long int lld;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        set <string> se;
        string s; cin >> s;
        lld cnt = 0,cnt_24 = 0;
        lld mod8 = 0,mod24;
        
        for(int i = 0;i < s.length();i++){
            for(int j = 1;j <= s.length() - i;j++){
                for(int k = i;k < j + i;k++){
                    mod8 = (mod8 * 10) + s[k] - '0';
                    mod24 = (mod24 * 10) + s[k] - '0';
                    mod8 %= 8;
                    mod24 %= 3;
                }
                if(!mod8 && mod24) cnt++;
            }
        }
        cout << cnt << endl;
    }
}
