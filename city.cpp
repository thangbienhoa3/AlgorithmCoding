#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct city{
	string name;
	int population;
	int income;
};
int n;
string Sol1(city a[]){
	int maxIncome = 0;
	int index = 0;
	for(int i = 0;i < n;i++){
		if(a[i].income > maxIncome){
			maxIncome = a[i].income;
			index = i;
		}
	}
	return a[index].name;
}
string Sol2(city a[]){
	int maxPop = 0;
	int index = 0;
	for(int i = 0;i < n;i++){
		if(a[i].population > maxPop){
			maxPop = a[i].population;
			index = i;
		}
	}
	return a[index].name;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    city a[100];
    cin >> n;
    for(int i = 0;i < n;i++){
    	cin >> a[i].name >> a[i].population >> a[i].income;
    }
    cout << "The city that has highest income is : " << Sol1(a) << endl;
    cout << "The city that has highest population is : " << Sol2(a) << endl;

}