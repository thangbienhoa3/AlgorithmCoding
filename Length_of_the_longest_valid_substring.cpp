#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main()
{
    string s;
    cin >> s;
    stack <char> sta;
    sta.push(s[0]);
    for(int i = 1;i < s.length();i++)
    {
        if(s[i] == '(') sta.push(s[i]);
        else
        {
            
        }
    }
    cout << sta.size() << endl;
}