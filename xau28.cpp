#include <iostream>

using namespace std;

int main(){
    string s; cin >> s;
    long long int n,m,ans = -1; cin >> n >> m;
    long long int it1 = 0,it2 = 0,cnt8 = 0,cnt2 = 0;
    for(it2 = 0;it2 < s.length();it2++){
        if(s[it2] == '8'){
            cnt8++;
        }
        else if(s[it2] == '2'){
            cnt2++;
        }
        while(cnt2 > n || cnt8 > m){
            if(s[it1] == '2'){
                cnt2--;
            }
            else if(s[it1] == '8'){
                cnt8--;
            }
            it1++;
        }
        if(cnt2 <= n && cnt8 <= m){
            ans = max(ans,it2 - it1 + 1);
        }
    }
    cout << ans << endl;
}