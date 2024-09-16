#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

vector <char> v;
string res;
int n,a[4];

void khoitao()
{
    int i = 0;
    while(i < n)
    {
        
    }
}
int main()
{
    int cnt = 1,i = 2;
    int range = 97;
    while(i <= 9)
    {
        if(cnt <= 3)
        {
            v.push_back(char(range));
            range++;
            cnt++;
        }
        if(cnt == 3)
        {
            i++;
            cnt = 0;
        }
    }
    for(int i = 0; i < v.size();i++) cout << i << " " << v[i] << endl;
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];


}   