#include <bits/stdc++.h>

using namespace std;

long long n,a[100005],ans;
string s;
const long long m = 1e9 + 7;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n >> s;
	priority_queue <long long> q;
	map <char,int> mp;
	for(int i = 0;i < s.length();i++){
		mp[s[i]]++;
	}
	for(auto it : mp){
		q.push(it.second);
	}
	if(n > q.size()){
		cout << "0" << endl;
	}
	else{
		while(n--){
			int t = q.top();t--;
			q.pop();
			q.push(t);
		}
		while(!q.empty()){
			ans += 1ll * q.top() * q.top();
			q.pop();
		}
		cout << ans << endl;
	}
}