#include <iostream>
#include <string>
#include <set>
#include <math.h>
using namespace std;

string s;
int n,m;
set <string> se;

void solve(char op[],int i,int j)
{
    if(s[i] == '\0')
    {
        op[j] = '\0';
        se.insert(op);
        return;
    }
    else
    {
        op[j] = s[i];
        solve(op,i + 1,j + 1);
        solve(op,i + 1,j);
        return;
    }
}
int main()
{
    getline(cin,s);
    m = s.length();
    n = pow(2,m) + 1;
    char op[m+1];
    solve(op,0,0);
    cout << se.size() << endl;
}