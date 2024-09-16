#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector <string> v;

void solve_po()
{
    queue <string> q;
    int n = 0;
    q.push("1");
    v.push_back("1");
    while(n < 10000)
    {
        string top = q.front();
        q.pop();
        v.push_back(top + "0");
        v.push_back(top + "1");
        q.push(top + "0");
        q.push(top + "1");
        n++;
    }
}
int main()
{
    solve_po();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i = 0; i < n;i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}