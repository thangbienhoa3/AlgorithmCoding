#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


vector <string> v;
map <string,int> mp;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);
    string temp;
    while(ss >> temp)
    {
        v.push_back(temp);
        mp[temp]++;
    }
    for(int i = 0;i < v.size();i++)
    {
        if(mp[v[i]])
        {
            cout << v[i] <<  " " << mp[v[i]] << endl;
            mp[v[i]] = 0;

        }
    }


}