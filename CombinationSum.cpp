#include <bits/stdc++.h>

using namespace std;
int n,k,currSum,x[12],yes = 0;
void print(){
	yes = 1;
	for(int i = 1;i <= k;i++){
		if(i == k) cout << x[i] << endl;
		else cout << x[i] << " + ";
	}
}
void Try(int i,int start,int currSum){
	for(int j = start;j <= 9;j++){
		if(currSum + j <= n){
			x[i] = j;
			if(i == k){
				if(currSum + j == n)
				print();
			}
			else Try(i+1,j+1,currSum+j);
		}
	}

}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n >> k;
	Try(1,1,0);
	if(!yes) cout << "NOT FOUND" << endl;
}