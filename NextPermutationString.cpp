#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n,stop = 0,cnt = 0; cin >> n;
    int a[n+5],b[n+5];
    string s[n+5];
    set <string>se;
    for(int i = 1;i <= n;i++){
        cin >> s[i];
    }
    sort(s + 1,s+n + 1);
    do{
        cnt++;
        for(int i = 1;i <= n;i++){
            cout << s[i] << ' ';
        }
        cout << endl;
    }while(next_permutation(s + 1,s + n + 1));
}