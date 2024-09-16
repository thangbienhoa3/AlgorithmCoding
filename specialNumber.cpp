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
    int n; cin >> n;
    int cnt4 = 0,cnt7 = 0 ;
    while(n > 0){
    	if(n % 7 == 0){
    		n -= 7;
    		cnt7++;
    	}
    	else if(n % 4 == 0){
    		n -= 4;
    		cnt4++;
    	}
    	else{
    		n -= 4;
    		cnt4++;
    	}
    }
    if(n < 0){
    	cout << "-1" << endl;
    }
    else{
    	for(int i = 0;i < cnt4;i++){
    		cout << "4";
    	}
    	for(int j = 0;j < cnt7;j++){
    		cout << "7";
    	}

    }
}