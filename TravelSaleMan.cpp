#include <bits/stdc++.h>

using namespace std;

int c[20][20],n,x[100],visted[100],ans = INT_MAX,cmin = INT_MAX;
void Try(int i,int curr){
	for(int j = 2;j <= n;j++){
		if(!visted[j]){
			x[i] = j;
			visted[j] = 1;
			curr += c[x[i-1]][j];// x[i-1]: city visted before
			if(i == n){
				ans = min(ans,curr + c[1][x[i]]);
			}
			else if(curr + (n - i + 1)*cmin < ans){
				Try(i+1,curr);
			}
			visted[j] = 0;
			curr -= c[x[i-1]][j];
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> c[i][j];
			if(i != j) cmin = min(c[i][j],cmin);
		}
	}
	x[1] = 1;
	visted[1] = 1;
	Try(2,0);
	cout << ans << endl;
}