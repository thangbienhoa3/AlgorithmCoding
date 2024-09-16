#include <iostream>
#include <algorithm>

using namespace std;
int a[10000],n,j,check = 1;


void khoitao()
{
    for(int i = 1;i <= n;i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while(i > 0 && a[i] > a[i + 1]) i--;
    
    if(i == 0) check = 0;
    else
    {
        int j = i + 1;
        while(a[i] < a[j]) j++;
        swap(a[j-1],a[i]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    cin >> n;
    khoitao();
    while(check)
    {
        for(int i = 1; i <= n;i++) cout << a[i];
        cout << endl;
        sinh();
    }
}