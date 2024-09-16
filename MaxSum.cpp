#include <bits/stdc++.h>
#include <string>

using namespace std;

using ll = long long;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    string max1,max2,min1,min2;
    for(int i = 0;i < a.length();i++){
    	if(a[i] == '5') {
    		max1.push_back('6');
    		min1.push_back('5');
    	}
    	else if(a[i] == '6') {
    		max1.push_back('6');
    		min1.push_back('5');
    	}
    	else{
	    	max1.push_back(a[i]);
	    	min1.push_back(a[i]);
   	 	}
    }
    for(int i = 0;i < b.length();i++){
    	if(b[i] == '5') {
    		max2.push_back('6');
    		min2.push_back('5');

    	}
    	else if(b[i] == '6') {
    		max2.push_back('6');
    		min2.push_back('5');
    	}
    	else{
	    	max2.push_back(b[i]);
	    	min2.push_back(b[i]);
    	}
    }
    cout << 1ll * stoi(max2) + 1ll * stoi(max1) << ' ';
    cout << 1ll * stoi(min2) + 1ll * stoi(min1) << endl;

}
