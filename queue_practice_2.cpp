#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector <int> v;

void solve()
{
    queue <int> q;
    q.push(9);
    v.push_back(9);
    int n = 0;
    while(n < 10000)
    {
        int top = q.front();
        q.pop();
        v.push_back(top*10);
        v.push_back(top*10 + 9);
        q.push(top*10);
        q.push(top*10 + 9);
        n++;
    }
}
int main()
{
    solve();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i = 0; i < 10000;i++)
        {
            if(v[i] % n == 0) 
            {
                cout << v[i] << endl;
                break;
            }
 
        }
    }
}