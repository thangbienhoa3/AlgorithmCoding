#include <iostream>
#include <algorithm>

using namespace std;

int n,k,j,a[10000],check = 1;

void khoitao()
{
    for(int i = 1;i <= k;i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    if(n - k + j == a[j]) j--;
    if(n - k + j != a[j]) a[j]++;
    if(j == 0) check = 0;
}
int main()
{
    cin >> n >> k;
    j = k;
    khoitao();
    while(check)
    {
        for(int i = 1;i <= k;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
