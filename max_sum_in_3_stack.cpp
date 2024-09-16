#include <iostream>
#include <algorithm>
#include <stack>


using namespace std;

int n1,n2,n3;
int i1 = 0,i2 = 0,i3 = 0;
int sum1,sum2,sum3;
int a[1000],b[1000],c[1000];

int main()
{
    cin >> n1 >> n2 >> n3;
    for(int i = 0;i < n1;i++) 
    {
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i = 0;i < n2;i++) 
    {
        cin >> b[i];
        sum2 += b[i];
    }
    for(int i = 0;i < n3;i++) 
    {
        cin >> c[i];
        sum3 += c[i];
    }
    while(1)
    {
        if(i1 == n1 || i2 == n2 || i3 == n3) 
        {
            cout << "0" << endl;
            break;
        }
        else if(sum1 == sum2 && sum2 == sum3) 
        {
            cout << sum1 << endl;
            break;
        }
        else if(sum1 >= sum2 && sum1 >= sum3) sum1 = sum1 - a[i1++];
        else if(sum2 >= sum1 && sum2 >= sum3) sum2 = sum2 - b[i2++];
        else if(sum3 >= sum1 && sum3 >= sum2) sum3 = sum3 - c[i3++];
    }
    

}