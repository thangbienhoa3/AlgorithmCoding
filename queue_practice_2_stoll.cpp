#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;
vector <string> v;

void solve()
{
    queue <string> q;
    q.push("9");
    v.push_back("9");
    int n = 0;
    while(n < 10000)
    {
        string top = q.front();
        q.pop();
        v.push_back(top + "0");
        v.push_back(top + "9");
        q.push(top + "0");
        q.push(top + "9");
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
            if(stoll(v[i]) % n == 0) 
            {
                cout << v[i] << endl;
                break;
            }
 
        }
    }
}