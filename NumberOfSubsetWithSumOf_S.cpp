#include <iostream>

using namespace std;
int n,k,s,cnt = 0;
int a[100],x[100];
void Try(int i,int pos,int sum){
    for(int j = pos;j <= n;j++){
        x[i] = j;
        sum += j;
        if(sum == s && i == k){
            cnt++;
        }
        else if(sum < s && i < k)
        Try(i+1,j+1,sum);
        sum -= j;
    }
}
int main(){
    cin >> n >> k >> s;
    Try(1,1,0);
    cout << cnt << endl;
}