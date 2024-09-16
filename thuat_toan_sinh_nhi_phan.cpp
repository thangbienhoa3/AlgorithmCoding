#include <iostream>

using namespace std;


int n, a[100],res;
void khoitao()
{
    for(int i =1 ;i <= n;i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0)// cấu hình cuối cùng
    {
        res = 0;
    }
    else
    {
        a[i] = 1;
    }
}
int main()
{
    cin >> n;
    res = 1;
    khoitao();
    while(res){
        for(int i = 1;i <= n;i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}