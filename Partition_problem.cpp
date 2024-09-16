#include <iostream>

using namespace std;


int n,a[1000],sum = 0;
int solve(int n,int sum)
{
    if(sum == 0) return 1;
    if(n == 0 && sum != 0) return 0;
    else
    {
        return (solve(n-1,sum - a[n-1]) || solve(n-1,sum));
    }
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2 != 0) cout << "False" << endl;
    if(sum % 2 == 0)
    {
        if(solve(n,sum/2)) cout << "True" << endl;
        else cout << "False" << endl;
    }
}