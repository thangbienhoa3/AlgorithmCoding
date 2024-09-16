#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int n,a[10000];

int main()
{
    int res = 1;
    cin >> n;
    int cnt_ne = 0,cnt_ze = 0,cnt_po = 0;
    int max_ne = -INT_MIN;
    int min_po = INT_MAX;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        if(a[i] < 0)
        {
            cnt_ne++;
            if(a[i] > max_ne) max_ne = a[i];
        }
        if(a[i] == 0) cnt_ze++;
        if(a[i] > 0)
        {
            cnt_po++;
            if(a[i] < min_po) min_po = a[i];
        }
    } 
    cout << cnt_ne << " " << cnt_po << " " << cnt_ze << endl;  
    if(cnt_ne % 2 != 0)
    {
        for(int i = 0;i < n;i++)
        {
            if(a[i] != 0) res = res * a[i];
        }
    }
    else if(cnt_ne % 2 == 0 && cnt_ne != 0)
    {
        for(int i = 0;i < n;i++)
        {
            if(a[i] != max_ne && a[i] != 0)
            {
                res = res * a[i];
            }
        }
    }
    else if(cnt_ne == 0 && cnt_ze != 0) res = 0;
    else if(cnt_ne == 0 && cnt_ze == 0) res = min_po;
    cout << res << endl;
}