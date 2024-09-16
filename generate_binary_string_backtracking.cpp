#include <iostream>
using namespace std;


int a[100];
int n;

void sinh(int k)
{
    if(k == n)
    {
        for(int i = 0;i < n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    /*for(int i = 0;i <= 1;i++)
    {
        a[k] = i;
        sinh(k+1);
    }*/
    a[k] = 0;
    sinh(k+1);
    a[k] = 1;
    sinh(k+1);
}
int main()
{
    cin >> n;
    sinh(0);
}