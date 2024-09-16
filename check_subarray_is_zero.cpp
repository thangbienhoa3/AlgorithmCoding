#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int n; int a[100];


int main()
{
    cin >> n;
    for(int i = 0; i < n;i++) cin >> a[i];
    int prefix[100] = {0};
    prefix[0] = a[0];
    unordered_set <int> sum;

    for(int i = 1; i < n;i++)
    {
        prefix[i] = prefix[i-1] + a[i];
        if(prefix[i] == 0 || sum.find(prefix[i]) != sum.end()){
            cout << "Exist the subarray " << endl;
            return 0;
        }
        else{
            sum.insert(prefix[i]);
        }
    }
    cout << "Not Exist the subarray" << endl;
}