#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n,a[100];

int main()
{
    cin >> n;
    int max_crr = 0, max_end = INT_MIN;
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 1;i < n;i++){
        max_crr += a[i];
        if(max_crr > max_end){
            max_end = max_crr;
        }
        if(max_crr < 0) max_crr = 0;
    }
    cout << max_end << endl;
    
}