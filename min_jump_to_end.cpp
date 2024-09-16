#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n;
int a[1000];

int solve(int l,int h)
{
    if(h == l) return 0;
    if(a[l] == 0) return INT_MAX;
    int min = INT_MAX;
    for(int i = l + 1;i <= h && i <= l + a[l];i++)
    {
        int jump = solve(i,h);
        if(jump != INT_MAX && jump + 1 < min)
        {
            min = jump + 1;
        }
    }
    return min;
}
int main()
{
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    cout << solve(0,n-1) << endl;

}