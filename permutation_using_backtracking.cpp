#include <iostream>
#include <set>
#include <vector>
using namespace std;



int n,a[100];
int mark[100] = {0};
set <vector <int> > se;
int res[100];
void solving(int k)
{
    if(k == n)
    {
        vector <int> temp;

        for(int i = 0; i < n;i++) temp.push_back(res[i]);
        if(se.find(temp) == se.end()) 
        {
            for(int i = 0; i < n;i++) cout << temp[i] << " ";
            cout << endl;
            se.insert(temp);
        }
        return;
    }
    else
    {
        for(int i = 0; i < n;i++)
        {
            if(mark[i] == 0)
            {
                mark[i] = 1;
                res[k] = a[i];
                solving(k+1);
                mark[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    solving(0);
}