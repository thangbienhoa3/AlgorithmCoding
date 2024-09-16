#include <iostream>

using namespace std;

typedef long long int lld;

int main(){
    lld n; cin >> n;
    lld x,mark[n+1];
    for(int i = 1;i <= n;i++){
        cin >> x;
        mark[x] = i;
    }    
    lld cnt = 1;
    for(int i = 2;i <= n;i++){
        if(mark[i] < mark[i-1]){
            cnt++;
        } 
    }
    cout << cnt << endl;
}