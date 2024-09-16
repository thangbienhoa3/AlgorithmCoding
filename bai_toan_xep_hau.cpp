#include <iostream>

using namespace std;


int n;
int a[100][100];
int issafe(int x,int y)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i][y]) return 0;
    }
    for(int i = 0;i < n;i++)
    {
        if(a[x][i]) return 0;
    }
    for(int i = x, j = y; i >= 0 && j >= 0; i-- ,j--)
    {
        if(a[i][j]) return 0;
    }
    for(int i = x, j = y; i < n && j >= 0; i++ ,j--)
    {
        if(a[i][j]) return 0;
    }
    return 1;
}
int giai(int x)
{
    if(x == n - 1) return 1;
    for(int j = 0;j < n;j++)
    {
        a[x][j] = 1;
        if(issafe(x,j))
        {
            if(giai(j+1)) return 1;
            else a[x][j] = 0;
        }
    }
}
int main()
{
    cin >> n;
}