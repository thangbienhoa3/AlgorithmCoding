#include <iostream>

using namespace std;

int n;
int k;
int main()
{
    cin >> n >> k;
    int res = n >> (k - 1);
    cout << res << endl;
}