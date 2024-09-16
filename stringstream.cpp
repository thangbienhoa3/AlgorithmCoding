#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    vector <string> v;
    getline(cin,s);
    string temp;
    stringstream ss(s);
    while(ss >> temp) v.push_back(temp);
    for(int i = 0; i < v.size();i++)
    {
        cout << v[i] << endl;
    }
}