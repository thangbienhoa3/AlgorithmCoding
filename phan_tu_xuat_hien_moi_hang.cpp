#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int a[100][100],n;
set <int> se;
int tim(int k){
    for(int i = 1;i < n;i++){
        int *po = find(a[i],a[i]+n,k);
        if(po - a[i] == n){
            return 0;
        }
    }
    return 1;
}
int main(){
     cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
        sort(a[i],a[i] + n);
    }
    for(int i = 0;i < n;i++){
        if(tim(a[0][i])){
            se.insert(a[0][i]);
        }
    }
    if(!se.empty()){
        for(auto it : se){
            cout << it << ' ';
        }
        cout << endl;
    }
    else cout << "NOT FOUND" << endl;
}