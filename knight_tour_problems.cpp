#include <iostream>


using namespace std;

int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int sol[1000][1000];
int n;
int issafe(int i,int j)
{
    return (i >= 0 && j >= 0 && i < n && j < n && (sol[i][j] == -1));
}
int solveKT(int x,int y,int movei)
{
    int imoi,jmoi;
    if(movei == n*n) return 1;
    
    for(int k = 0;k < 8;k++)
    {
        imoi = x + dx[k];
        jmoi = y + dy[k];
        if(issafe(imoi,jmoi) != 0)
        {
            sol[imoi][jmoi] = movei;
            if(solveKT(imoi,jmoi,movei + 1) == 1)
            {
                return 1;
            }
            else sol[imoi][jmoi] = -1;//backtracking
        }
    }
    return 0;
}
int main()
{   
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            sol[i][j] = -1;
        }
    }
    sol[0][0] = 0;
    if(solveKT(0,0,1))
    {
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    }
}