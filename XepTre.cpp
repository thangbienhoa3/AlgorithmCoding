#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

typedef long long int lld;

int main(){
    lld n,m,cnt = 0; cin >> n >> m;
    lld a[n+1],b[m+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }   
    sort(a,a+n);
    lld it1 = 0, it2 = n - 1;
    while(it1 <= it2){
        if(a[it1] + a[it2] <= m){
            cnt++;
            it1++,it2--;
        }
        else{
            cnt++;
            it2--;
        }
    }
    cout << cnt << endl;
}
