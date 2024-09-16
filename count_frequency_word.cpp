#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length();i++)
    {
        s[i] = tolower(s[i]);
        if(isalpha(s[i]) == 0 && isdigit(s[i]) == 0) s[i] = ' ';
    }
    stringstream ss(s);
    string temp; vector <string> v;
    while(ss >> temp) v.push_back(temp);
    map <string,int> mp;
    for(int i = 0; i < v.size();i++) mp[v[i]]++;
    for(int i = 0;i < v.size();i++)
    {
        if(mp[v[i]] != 0)
        {
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] = 0;   
        }
    }    
    
}