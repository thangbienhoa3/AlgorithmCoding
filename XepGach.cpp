#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int lld;

int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater <lld> ());
    int dc = a[0];
    int cnt = 1;
    for(int i = 1;i < n;i++){
        if(dc <= 0){
            break;
        }
        cnt++;
        dc = min(dc - 1,a[i]);
    }
    cout << cnt << endl;
}