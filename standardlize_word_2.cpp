#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

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
    cout << v[0];
    for(int i = 0;i < v.size() - 1;i++)
    {
        cout << v[i][0];
    }
    cout << "@gmail.com" << endl;
    

    
}