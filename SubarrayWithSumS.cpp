#include <iostream>
#include <algorithm>
using namespace std;
int n,s;
int a[100],x[100];
void Try(int i,int pos,int sum){
    for(int j = pos;j <= n;j++){
        x[i] = a[j];
        sum += a[j];
        if(sum == s){
            cout << "[";
            for(int l = 1;l <= i;l++){
                if(l == i) cout << x[l] << "]" << endl;
                else cout << x[l] << ' ';
            }
        }
        else if(sum < s)
        Try(i+1,j+1,sum);
        sum -= a[j];
    }
}
int main(){
    cin >> n >> s;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    Try(1,1,0);
}