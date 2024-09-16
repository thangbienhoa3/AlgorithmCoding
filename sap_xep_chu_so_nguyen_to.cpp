#include <iostream>
#include <algorithm>
using namespace std;

int checknt(int n){
    if(n == 1 || n == 0) return 0;
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int cnt_nt(int n){
    int cnt = 0;
    int r;
    while(n > 0){
        r = n % 10;
        if(checknt(r)){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
int cmp(int a,int b){
    return cnt_nt(a) > cnt_nt(b);
}
int main(){
    int a[1000000];
    int n; cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    stable_sort(a,a+n,cmp);
    for(int i = 0; i < n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}