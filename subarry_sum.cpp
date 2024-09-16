#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int n, dp[10000];

int main()
{
    cin >> n;
    int presum = 0;
    int cnt = 0;
    set <int> s;
    for(int i = 0; i < n;i++)
    {
        int a; cin >> a;
        presum += a;
        if(binary_search(s.begin(),s.end(),a - 7))
        {
            cnt++;
            s.insert(a);
        }
        s.insert(a);
    }
    cout << cnt << endl;
}