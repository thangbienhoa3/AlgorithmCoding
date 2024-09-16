#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,x; cin >> n >> x;
    int a[n]; 
    for(int i = 0;i < n;i++) cin >> a[i];
    if(binary_search(a,a + n,x))
    {
        cout << "found" << endl;
    }
    else cout << "not found" << endl;

}