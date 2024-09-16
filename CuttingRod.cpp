#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;
int check(int a[],int n,int k,double len){
    ll ans = 0;
    for(int i = 0;i < n;i++){
        ans += (int) (a[i] / len);
    }
    return ans >= k;
}
int main(){
    int n,k;
    cin >> n >> k;
    double l = 0, r = 1e9;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    double res = 0;
    for(int i = 1;i <= 80;i++){
        double mid = (l + r) / 2;
        if(check(a,n,k,mid)){
            l = mid;
            res = mid;
        }
        else{
            r = mid;
        }
    }
    cout << fixed << setprecision(6) << res << endl;
}