#include <iostream>
using namespace std;
int a[100],m;
int x,y;
int solve(int n)
{
    cout << "x: " << x << " y: " << y << " ";
    cout << "a[n]: " << a[n] << " n: " << n << "\n";
    if(n <= 1) return n;
    if(a[n] != -1) return a[n];
   
    x = solve(n - 1);
    y = solve(n - 2);
    //cout << "x: " << x << " y: " << y << " ";
    a[n] = x + y;
    //cout << "a[n]: " << a[n] << "\n";
    return a[n];
}
int main()
{
    cin >> m;

    for(int i = 0; i <= m;i++) a[i] = -1;
    
    cout << solve(m) << " ";
}