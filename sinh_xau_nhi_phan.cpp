#include <iostream>

using namespace std;

int a[100],n;
void khoitao()
{
    for(int i = 1; i <= n;i++) a[i] = 0;
}
int mark = 1;
void sinh()
{
    int i = n;
    while(i >= 1 && a[i])
    {
        a[i] = 0;
        i--;
    }
    if(i == 0) mark = 0;
    else a[i] = 1;
    
    
}
int main()
{
    cin >> n;
    khoitao();
    while(mark){
        for(int i = 1;i <= n;i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}