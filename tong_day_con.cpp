#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#define max 2000
int a[max],n;
int dp[max] = {0};
int main()
{
    cin >> n;
    dp[0] = 1;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        for(int j = 0; j < 1000;j++)
        {
            if(j >= a[i])
            {
                dp[j] = dp[j - a[i]];
            }
        }
    }
    set <int> res;
    for(int j = 0; j < 1000;j++)
    {
        if(dp[j] != 0) res.insert(j);
    }
    cout << res.size() << endl;
    for(auto it : res)
    {
        cout << it << " ";
    }
}