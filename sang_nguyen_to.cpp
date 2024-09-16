#include <iostream>
#include <vector>
using namespace std;

long long int n;
void prime(vector <long long int> &v)
{
    v[0] = v[1] = 0;
    for(int i = 2; i <= n;i++){
        if(v[i])
        {
            for(long long int j = i * i;j <= n;j+=i){
                v[j] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    vector <long long int> v (n,1);
    prime(v);
    for(long long int i = 0; i < n;i++)
    {
        if(v[i]) cout << i << " ";
    }
}