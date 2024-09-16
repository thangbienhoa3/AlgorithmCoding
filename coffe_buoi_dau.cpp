#include <iostream>
#include <vector>
using namespace std;

long long int INF = 1e18;
int n,k,q;
int a[20000],d[20000] = {0};
int s[20000] = {0};
void update(int l, int r)
{
    d[l]++, d[r+1]--;
}
void rebuild()
{
    
    for(int i = 1; i < 20000;i++)
    {
        a[i] = a[i - 1] + d[i];
        s[i] = s[i - 1] + (a[i] >= k);
    }
}
int query(int a, int b) {
    return s[b] - s[a - 1];
}
int main()
{
    cin >> n >> k >> q;
    cin.ignore();
    for(int i = 0; i < n;i++){
        int l,r;
        cin >> l >> r;
        update(l,r);
    }
    rebuild();
    for(int i = 90; i < 101;i++) cout << a[i] << " ";
    cout << "\n";
    for(int i = 90; i < 101;i++) cout << s[i] << " ";
    cout << endl;
    for(int i = 0; i < q;i++)
    {
        int a,b; cin >> a >> b;
        cout << query(a,b) << endl;
    }
    
}