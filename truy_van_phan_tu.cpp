#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int a[100000];
int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int query; cin >> query;
    while(query--){
        int action;
        cin >> action;
        if(binary_search(a,a+n,action)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }
}