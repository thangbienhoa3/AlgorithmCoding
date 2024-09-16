#include <iostream>
#include <vector>
using namespace std;

int n;
int a[100];
int solve()
{
    int l[100] = {0};
    int r[100] = {0};
    l[0] = a[0]; r[n-1] = a[n-1];
    for(int i = 1; i < n;i++) l[i] = l[i-1] + a[i];
    for(int i = n-2; i >= 0;i--) r[i] = r[i+1] + a[i];
    for(int i = 0; i < n;i++) if(l[i] == r[i]) return i;

    return -1;

}
int main()
{
    cin >> n;
    for(int i = 0; i < n;i++) cin >> a[i];
    cout << solve() << endl;
}