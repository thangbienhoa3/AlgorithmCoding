#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n,x; cin >> n >> x;
    int a[n];
    for(int i = 0;i < n;i++) cin >> a[i];
    auto it = lower_bound(a,a+n,x);// tìm vị trí đầu tiên trong mảng >= x;
    if(it == a + n) cout << "not found" << endl;
    else  cout << it - a << endl;


}