#include <iostream>
#include <map>
#include <string>

using namespace std;

string s;
int cnt,allcnt,lvlcnt;
map <char,int> mp;


int solve()
{
    for(int i = 0;i < s.length();i++)
    {
        cout << i << " " << lvlcnt << endl;
        if(i == 0)
        {
            allcnt = lvlcnt = 1;
            mp[s[i]] = 1;
            continue;
        }
        lvlcnt = allcnt + 1;
        if(mp.find(s[i]) == mp.end())
        {
            allcnt += lvlcnt;
        }
        else if(mp.find(s[i]) != mp.end())
        {
            allcnt += lvlcnt - mp[s[i]];
        }
        mp[s[i]] = lvlcnt;
    }
    return allcnt + 1;

}
int main()
{
    getline(cin,s);
    cout << solve() << endl;
    for(int i = 0; i < s.length();i++) cout << mp[s[i]] << " ";
}