#include <iostream>
#include <queue>
#include <set>
#include <utility>
using namespace std;


int main()
{
    int s,t;
    cin >> s >> t;
    set <int> se;
    se.insert(s);
    queue < pair <int,int> > q;
    q.push({s,0});
    while(!q.empty())
    {
        pair <int,int> top = q.front();
        q.pop();
        if(se.find(t) != se.end()) 
        {
            cout << top.second << endl;
            break;
        }
        if(top.first == t + 1 || top.first * 2 == t) 
        {
            cout << top.second + 1 << endl;
            break;
        }
        if(se.find(top.first * 2) == se.end() && top.first < t)
        {
            q.push({top.first * 2,top.second + 1});
            se.insert(top.first * 2);
        }
        if(se.find(top.first - 1) == se.end() && top.first > 1)
        {
            q.push({top.first -  1,top.second + 1});
            se.insert(top.first - 1);
        }
    }


}