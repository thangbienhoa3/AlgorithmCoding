#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
vector <string> v;
void solve()
{
    string res = v[0];
    int len = res.length();
    for(int i = 1;i < n;i++)
    {
        while(v[i].find(res) != 0)
        {
            res = res.substr(0,len-1);
            len--;
        }
    }
    if(res.empty()) cout << "" << endl;
    else cout << res << endl;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        string tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    solve();
}