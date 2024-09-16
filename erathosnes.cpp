#include <iostream>
#include <vector>
using namespace std;
#define ll long long


ll n;
void prime_sieve(vector <int> v)
{
    v[0] = v[1] = 0;
    for(int i = 3; i <= n;i++) v[i] = 1;
    for(ll i = 3; i <= n;i++) 
    {
        if(v[i]){
            for(ll j = i*i; j <= n;j = j + i)
            {
                v[j] = 0;
            } 
        }
    }
}

int main()
{
    cin >> n;
    vector <int> v(n,1);
    prime_sieve(v);
    for(int i = 0; i < n;i++)
    {
        if(v[i]) cout << i << " ";
    }
}