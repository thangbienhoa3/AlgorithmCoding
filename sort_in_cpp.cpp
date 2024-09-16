#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector <int> v;

int main()
{
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        int a; cin >> a;
        v.push_back(a);
    }   
    for(int i = 0;i < n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(),v.end());
    for(int i = 0;i < n;i++)
    {
        cout << v[i] << " ";
    }
}