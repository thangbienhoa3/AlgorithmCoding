#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int cnt_num = 0 ,cnt_char = 0 ,cnt_sp = 0;

    for(int i = 0; i < s.length();i++)
    {
        if(isdigit(s[i]) != 0) 
        {
            cnt_num++;
            continue;
        }
        if(isalpha(s[i]) != 0) 
        {
            cnt_char++;
            continue;
        }
        else cnt_sp++;
    }
    cout << cnt_num << " " << cnt_char << " " << cnt_sp << endl;

    
}