#include <iostream>
#include <algorithm>
using namespace std;
long long int a[100005];
int main(){
    long long int n,k; cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            int it1 = j + 1,it2 = n - 1;
            while(it2 > it1){
                if(a[i] + a[j] + a[it1] + a[it2] == k){
                    cout << "YES" << endl;
                    return 0;
                }
                else if(a[i] + a[j] + a[it1] + a[it2] > k){
                    it2--;
                }
                else it1++;
            }   
        }
    }
    cout << "NO" << endl;
 
}
