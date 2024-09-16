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
int solve(int x)
{
    if(x == n) return 1;
    else
    {
        for(int j = 0;j < n;j++)
        {
            if(issafe(x,j))
            {
                a[x][j] = 1;
                if(solve(x+1))
                {
                    return 1;
                }
                else a[x][j] = 0;
            }
        }
        return 0;
    }
    return 0;
}
int main()
{
    cin >> n;
    if(solve(0))
    {
        for(int i = 0;i < n;i++)
        {
            for(int j = 0; j < n;j++)
            {
                if(a[i][j]) cout << "Q ";
                else cout << ". ";
            }
            cout << endl;
        }
    }
}