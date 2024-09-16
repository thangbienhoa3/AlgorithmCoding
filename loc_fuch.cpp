#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector <string> v;

void solve()
{
    queue <string> q;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    int n = 0;
    while(n < 10000)
    {
        string top = q.front();
        q.pop();
        v.push_back(top + "6");
        v.push_back(top + "8");
        q.push(top + "6");
        q.push(top + "8");
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
        vector <string> temp;
        for(int i = 0; v[i].length() <= n;i++) temp.push_back(v[i]);

        for(int i = temp.size() - 1;i >= 0;i--) cout << temp[i] << " ";
        cout << endl;
    
    }
}