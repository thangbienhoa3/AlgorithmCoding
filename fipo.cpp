
#include <iostream>
#include <algorithm>

using namespace std;
long long int a[1000];

int main(){
    int n,x;
    cin >> n >> x;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    long long int *it = lower_bound(a,a+n,x);
    long long int po = it - a;
    if(a[po-1] != x && a[po] != x){
        cout << "-1" << endl;
    }
    else cout << po << endl;
    
}