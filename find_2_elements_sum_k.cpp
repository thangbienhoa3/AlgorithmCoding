#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int n,k,a[10000];
map <int,int> mp;

int main()
{
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        mp[a[i]] = 1;
    }
    sort(a,a+n);
    
    for(int i = 0;i < n;i++){
        mp[a[i]] = 0;
        if(binary_search(a,a+n,k - a[i]) && mp[k - a[i]]){
            cout << a[i] << " " << k - a[i] << endl;
        }
    }
   
    /*for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            if(a[i] + a[j] == k){
                cout << a[i] << " " << a[j];
            }
        }
    }*/

}