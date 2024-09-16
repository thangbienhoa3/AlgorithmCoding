#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int a[100000],n;
int main()
{
    cin >> n;
    for(int i = 0; i < n;i++) cin >> a[i];
    vector <int> dp;
    for(int i = 0; i < n;i++)
    {
        auto it = lower_bound (dp.begin(), dp.end(), a[i]);
        if(it == dp.end()) dp.push_back(a[i]);
        else *it = dp[i];
    }
    cout << dp.size() << endl;
}