#include <iostream>
#include <vector>
#define max_len 200005
using namespace std;

long long int n;

void prime(vector <long long int> &v)
{
    v[0] = v[1] = 0;
    for(long long int i = 2; i <= max_len;i++)
    {
        if(v[i])
        {
            for(long long int j = i*i;j <= max_len;j=j+i) v[j] = 0;
        }
    }
}
int main()
{
    vector <long long int> v(max_len,1);
    prime(v);
    long long int a[max_len] = {0};
    for(int i = 1; i < max_len;i++)
    {
        if(v[i]) a[i] = a[i-1] + 1;
        if(v[i] == 0) a[i] = a[i-1];
    }
    long long int c,b; cin >>  c >> b;
    cout << a[b] - a[c-1] << endl;
    

}