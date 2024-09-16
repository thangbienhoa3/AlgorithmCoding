#include <iostream>
#include <algorithm>
using namespace std;


int a[100],n;
int max3(int a,int b,int c)
{
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}
int min3(int a,int b,int c)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];
    int max_ending_here = a[0];
    int min_ending_here = a[0];
    int max_so_far = a[0];
    for(int i = 1;i < n;i++)
    {
        int tmp = max3(a[i],a[i] * max_ending_here, a[i] * min_ending_here);
        min_ending_here = min3(a[i], a[i] * max_ending_here , a[i] * min_ending_here);
        max_ending_here = tmp;
        max_so_far = max(max_so_far,max_ending_here);
    }
    cout << max_so_far << endl;
}