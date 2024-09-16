#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

string s;
set <string> se;
int mark[100];
string temp = " ";
void solve(int k)
{
    if(k == s.length()) 
    {
        string res;
        for(int i = 0; i < s.length();i++)
        {
            res += temp[i];
        }
        se.insert(res);
    }
    else
    {
        for(int i = 0;i < s.length();i++)
        {
            if(mark[i] == 0)
            {
                mark[i] = 1;
                temp[k] = s[i];
                solve(k+1);
                mark[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> s;
    solve(0);
    for(auto it : se)
    {
        cout << it << endl;
    }
    
}