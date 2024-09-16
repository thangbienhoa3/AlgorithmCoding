#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp; 
    vector <string> v;
    while(ss >> temp) v.push_back(temp);
    string clear;
    getline(cin,clear);
    for(int i = 0; i < v.size();i++)
    {
        if(v[i] != clear)
        {
            if(i == v.size() - 1 || v[i+1] == clear)
            {
                cout << v[i] << endl;
            }
            else
            cout << v[i] << " ";
        }
    }
}