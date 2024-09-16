#include <iostream>
#include <string>
using namespace std;

int tim_min(int a,int b,int c)
{
    int min = a;
    if(min > b) min = b;
    if(min > c) min = c;
    return min;
}
int res = 0;
string s1,s2;

int solve(int l1,int l2)
{
    if(l1 == 0) return l2;
    else if(l2 == 0) return l1;
    else if(s1[l1-1] == s2[l2-1]) res = solve(l1-1,l2-1);
    else
    {
        res =  1 + tim_min(solve(l1-1,l2),solve(l1,l2-1),solve(l1-1,l2-1));
    }
    return res;
    
}
int main()
{
    getline(cin,s1);
    getline(cin,s2);
    int dp[100][100] = {0};
    int l1 = s1.length(); int l2 = s2.length();
    cout << solve(l1,l2) << endl;
}