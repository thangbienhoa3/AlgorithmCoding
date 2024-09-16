#include <iostream>

using namespace std;

int n,cnt;
int a[100][100];
int issafe(int x,int y)
{
    for(int i = y;i >= 0;i--)
    {
        if(a[x][i]) return 0;
    }
     for(int i = x;i >= 0;i--)
    {
        if(a[i][y]) return 0;
    }
    for(int i = x, j = y;i >= 0 && j >= 0;i--,j--)
    {
        if(a[i][j]) return 0;
    }
    for(int i = x, j = y;i < n && j >= 0;i++,j--)
    {
        if(a[i][j]) return 0;
    }
    return 1;
}
void print_res()
{
    cnt++;
}
int solve(int j)
{
    if(j == n)
    {
        print_res();
        return 1;
    }
    for(int i = 0; i < n;i++)
    {
        if(issafe(i,j))
        {
            a[i][j] = 1;
            solve(j+1);
            a[i][j] = 0;
        }
    }
    return 0;
}
int main()
{
    cin >> n;
    solve(0);
    cout << cnt << endl;

}