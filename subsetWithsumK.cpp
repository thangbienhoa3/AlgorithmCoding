#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, S;
    cin >> n >> S;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int F[S + 1] = {0};
    F[0] = 1; // tap rong
    for(int i = 0; i < n; i++){
        //a[i]
        for(int j = S; j >= a[i]; j--){
            if(F[j - a[i]] == 1){
                F[j] = 1;
            }
        }
    }
    if(F[S]){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}
