#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set <pair <int,int>> se;
    int n,m;
   	cin >> n;
   	cin.ignore();
   	for(int i = 1;i <= n;i++){
   		string s,tmp;
   		getline(cin,s);
   		stringstream ss(s);
   		while(ss >> tmp){
   			int x = stoi(tmp);
   			se.insert(make_pair(i,x));
   		}	
   	}
   	for(auto it : se){
   		cout << it.first << ' ' << it.second << endl;
   	}
    
}