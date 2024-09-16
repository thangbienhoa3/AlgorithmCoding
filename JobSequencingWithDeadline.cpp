#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
const int N = 1e5+2;
struct job{
	int id;
	int dead;
	int profit;
};
struct cmpJob {
    bool operator()(job const& a, job const& b)
    {
        return (a.profit < b.profit);
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue <job,vector <job>, cmpJob> pq;
    int n; cin >> n;
    job j[N];
    for(int i = 1;i <= n;i++){
    	cin >> j[i].id >> j[i].dead >> j[i].profit;
    }
    sort(j+1,j+n+1,[](job a,job b){return a.dead < b.dead;});
    for(int i = 1;i <= n;i++){
    	cout << j[i].id << ' ' << j[i].dead << ' ' << j[i].profit << endl;
    }
    vector <job> res;
    int pro = 0;
    for(int i = n;i >= 1;i--){
    	int slot;
    	if(i == 1) slot = j[i].dead;
    	else slot = j[i].dead - j[i-1].dead;
    	pq.push(j[i]);
    	while(slot > 0 && !pq.empty()){
    		job tmp = pq.top();
    		pro += tmp.profit;
    		pq.pop();
    		slot--;
    	}
    }
    cout << pro << endl;
    
}
