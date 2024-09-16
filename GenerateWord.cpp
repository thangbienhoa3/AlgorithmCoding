#include <bits/stdc++.h>

using namespace std;
int n,m,stop,used[100][100];
char c[100][100];
string s;
int dx[4] = {-1,0,0,1};
int dy[4] = {0,1,-1,0};
void Try(int i,int j,int pos,string currSum){
	if(stop) return;
	if(currSum == s){
		stop = 1;
		return;
	}
	for(int k = 0;k < 4;k++){
		int imoi = i + dx[k],jmoi = j + dy[k];
		if(imoi >= 1 && jmoi >= 1 && imoi <= n && jmoi <= m && !used[imoi][jmoi] && s[pos] == c[imoi][jmoi]){
			Try(imoi,jmoi,pos+1,currSum + c[imoi][jmoi]);
		}
	}
	used[i][j] = 0;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> c[i][j];
		}
	}
	cin >> s;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			string tmp = "";
			Try(i,j,0,tmp);
		}
	}
	if(stop){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}