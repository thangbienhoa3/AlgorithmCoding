#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int n; cin >> n;
    cin.ignore();
    vector <string> v;
    map <string,int> mp;
    for(int i = 0; i < n;i++)
    {
        string s; getline(cin,s);
        if(mp[s] == 0) 
        {
            v.push_back(s);
            mp[s]++;
        }
        else{
            v.push_back(s + to_string(mp[s]));
            mp[s]++;
        }
    }
    for(int i = 0; i < n;i++)
    {
       cout << v[i] << endl;
    }


}