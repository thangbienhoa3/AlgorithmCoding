#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;



int n,k,a[100];
vector <int> v;
int mark[100];
set < vector <int> > se;
void solve(int index)
{
    if(index == k )
    { 
        vector <int> temp;
        for(int i = 0; i < v.size();i++) temp.push_back(v[i]);
        sort(temp.begin(),temp.end());
        if(se.find(temp) == se.end())
        { 
            for(int i = 0; i < v.size();i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            se.insert(v);
            return;
        }
    }
    else
    {
        for(int i = index;i < n;i++)
        {
            if(mark[a[i]] == 0)
            {
                v.push_back(a[i]);
                mark[a[i]] = 1;
                solve(index + 1);
                v.pop_back();
                mark[a[i]] = 0;
            }
        }
    }
}   

int main()
{
    cin >> n >> k;
    for(int i = 0;i < n;i++) cin >> a[i];
    solve(0);
    
}