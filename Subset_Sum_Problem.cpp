#include <iostream>
#include <stdbool.h>

using namespace std;
int a[100],n,sum;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> sum;
        for(int i = 0; i < n;i++)  cin >> a[i];
        int b[100][100];
        b[0][0] = 1;
        for(int i = 1; i < n;i++) b[i][0] = 1;
        for(int i = 1; i < n;i++) b[0][i] = 0;
        
        for(int i = 1; i < n + 1;i++)
        {
            for(int j = 1; j < sum + 1;j++)
            {
                if(a[i-1] > j) b[i][j] = b[i-1][j];
                else
                b[i][j] = b[i-1][j] || b[i-1][j - a[i-1]];
            }
        }
        cout << b[n][sum] << "\n";
    }
}