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
    string res;
    int fre = 0;
    for(auto it : mp)
    {
        if(it.second > fre)
        {
            fre = it.second;
            res = it.first;
        }
    }
    cout << res << endl;
}