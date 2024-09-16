#include <iostream>
#include <map>

using namespace std;
#define max_len 200005
long long int n,x, a[max_len];

int main()
{
    cin >> n >> x;
    for(int i = 0;i < n;i++) cin >> a[i];
    long long int presum = 0,ans = 0;
    map <long long int,int> sums;
    sums[0] = 1;
    for(int i = 0; i < n;i++)
    {
        presum += a[i];
        ans += sums[presum - x];
        sums[presum]++;
    }
    cout << ans << endl;

}