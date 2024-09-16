#include <iostream>
#include <algorithm>

using namespace std;
long long int a[1000000];
int main(){
    int n,k,cnt = 0;
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;i++){
        long long int *t1 = lower_bound(a + i + 1, a + n,a[i] + k);
        long long int *t2 = upper_bound(a + i + 1, a + n,a[i] + k);
        long long po1 = t2 - t1;
        cnt += po1;
    }
    cout << cnt << endl;
}