#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void print(int a[],int n){
	for(int i = 0;i < n;i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n+1],sum = 0;
    for(int i = 0;i < n;i++){
    	cin >> a[i];
    	sum += a[i];
    }
   	int dp[sum+1] = {0};
   	dp[0] = 1;
   	for(int i = 0;i < n;i++){
   		for(int j = sum;j >= a[i];j--){
   			if(dp[j-a[i]] == 1){
   				dp[j] = 1;
   			}
   		}
   	}
   	for(int i = 0;i <= sum;i++){
   		if(dp[i]) cout << i << ' ';
   	}
}