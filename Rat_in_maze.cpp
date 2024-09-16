#include <iostream>
#include <string>
#include <vector>

using namespace std;
int a[1000][1000];
int n;
string direction = "ULDR";
string res = "";
vector <string> ans;

int di[4] = {-1,0,1,0};
int dj[4] = {0,-1,0,1};

int issafe(int i,int j)
{
    return a[i][j] == 1 && i >= 0 && j >= 0 && i < n && j < n;
}
void solve(int i,int j)
{
    if(i == n - 1 && j == n - 1)
    {
        ans.push_back(res);
        return;
    }
    a[i][j] = 0;
    for(int k = 0;k < 4;k++)
    {
        int imoi = i + di[k];
        int jmoi = j + dj[k];
        if(issafe(imoi,jmoi))
        {
            res += direction[k];
            solve(imoi,jmoi);
            res.pop_back();
        }
    }
    a[i][j] = 1;
    
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> a[i][j];
        }
    }
    solve(0,0);
        for(int i = 0;i < ans.size();i++)
        {
            cout << ans[i] << endl;
        }

}