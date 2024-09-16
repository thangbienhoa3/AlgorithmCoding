#include <iostream>

using namespace std;
int n, a[100],k;

int solve()
{
    int cnt = 0;
    int size = 1;
    while(size <= n)
    {
        int sum = 0;
        for(int i = 0;i < size;i++) sum += a[i];
        if(sum >= k) return cnt;
        for(int i = size; i < n;i++){
            sum = sum - a[i-size] + a[i];
            if(sum >= k) return cnt;
        }   
        cnt++;
        size++;
    }
    return cnt;

}
int main()
{
    cin >> n >> k; for(int i = 0;i < n;i++) cin >> a[i];
    int cnt = solve();
    if(cnt == 0) cout << "-1" << endl;
    else cout << cnt << endl;

}