#include <iostream>
#include <algorithm>
using namespace std;

int n,k,price[10000];

int main()
{
    cin >> n >> k;
    for(int i = 0;i < n;i++)
    {
        cin >> price[i];
    }
    sort(price,price + n);
    int min = 0,max = 0;
    for(int i = 0;i < k;i++)
    {
        min += price[i];
    }
    for(int i = n - 1;i > n - k - 1;i--)
    {
        max += price[i];
    }
    cout << min << " " << max << endl;
}