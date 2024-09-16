#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

typedef long long int lld;
bool cmp(pair <int,int> a,pair <int,int> b){
    return a.second < b.second;
}
int main(){
    lld n,m,cnt = 0; cin >> n >> m;
    lld a[n+1],b[m+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }   
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int i = 0, j =0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= 1){
            cnt++;
            i++,j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else j++;
    }   
    cout << cnt << endl;
    
}