#include <iostream>



using namespace std;

int n;
int a[100];
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++){
        a[i] = i + 1;
    }
    for(int i = 0;i < (1 << n);i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(((1 << j) & i) != 0)
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }

}