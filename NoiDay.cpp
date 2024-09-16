#include <bits/stdc++.h>

using namespace std;

long long n,a[100005],ans;
const long long m = 1e9 + 7;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n;
	priority_queue <long long> q;
	for(int i = 1;i <= n;i++){
		int x; cin >> x;
		q.push(x);
	}
	while(q.size() > 1){
		long long t1 = q.top();
		q.pop();
		long long t2 = q.top();
		q.pop();
		ans += t1 + t2;
		ans %= m;
		q.push(t1 + t2);
	}
	cout << ans << endl;
}