#include <iostream>
#include <algorithm>
using namespace std;

int n,weight,w[1000],pro[1000];
int res;

int solve(int n,int weight)
{
    if(n == 0 || weight == 0) return 0;
    else
    {
        return max(pro[n-1] + solve(n-1,weight - w[n-1]),solve(n-1,weight));
    }
}
int main()
{
    cin >> n >> weight;
    for(int i = 0; i < n;i++) cin >> pro[i];
    for(int i = 0; i < n;i++) cin >> w[i];
    cout << solve(n,weight) << endl;
}