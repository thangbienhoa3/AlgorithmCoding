#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string s;
    vector <string> v;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss >> temp) v.push_back(temp);
    map <string,int> mp;
    for(int i = 0; i < v.size();i++)
    {
        mp[v[i]]++;
    }
    for(int i = 0; i < v.size();i++)
    {
        if(mp[v[i]] != 0)
        {
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] = 0;
        }
    }
}