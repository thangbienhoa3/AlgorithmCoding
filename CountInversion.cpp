#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int merge(int a[],int l,int m,int r){
	vector <int> left(a+l,a+m+1);
	vector <int> right(a+m+1,a+r+1);
	int len1 = left.size();
	int len2 = right.size();
	int ans = 0;
	int i = 0, j = 0;
	while(i < len1 && j < len2){
		if(left[i] > right[j]){
			a[l] = right[j];
			ans += left.size() - i;
			j++;l++;
		}
		else{
			a[l] = left[i];
			i++;l++;
		}
	}
	while(i < len1){
		a[l] = left[i];
		i++;l++;
	}
	while(j < len2){
		a[l] = right[j];j++;l++;
	}
	return ans;

}
ll mergeSort(int a[],int l,int r){
	if(l < r){
		ll ans = 0;
		int m = (l + r) / 2;
		ans += mergeSort(a,l,m);
		ans += mergeSort(a,m+1,r);
		ans += merge(a,l,m,r);
		return ans;
	}
	return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   	int n; cin >> n;
   	int a[n];
   	for(int i = 0;i < n;i++) cin >> a[i];
   	cout << mergeSort(a,0,n-1) << endl;
}