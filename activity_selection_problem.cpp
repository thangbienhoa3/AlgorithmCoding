#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int n;
vector < pair <int,int> > vect;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve()
{
    int i = 0;
    cout << i << " ";
    for(int j = 1; j < n;j++)
    {
        if(vect[j].first > vect[i].second)
        {
            cout << j << " ";
            i = j;
        }
    }
}
int main()
{
    cin >> n;
    int s[100],f[100];
    for(int i = 0; i < n;i++) cin >> s[i]; 
    for(int i = 0; i < n;i++) cin >> f[i]; 
    
    for(int i = 0; i < n;i++)
    {
        vect.push_back(make_pair(s[i],f[i]));
    }
    sort(vect.begin(),vect.end(),sortbysec);
    for(int i = 0; i < n;i++)
    {
        cout << "start: " << vect[i].first << " end: " << vect[i].second << endl;
    }
    solve();
    
    
}