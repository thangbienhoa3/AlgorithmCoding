#include <iostream>

using namespace std;

bool IsEnd(int a[],int n) {
	for (int i = 1; i <= n; i++)
		if (a[i] != n - i + 1) return false;
	return true;
}
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }  
    if(IsEnd(a,n)){
        for(int i = 1;i <= n;i++){
            cout << i << ' ';
        }
        cout << endl;
    }
    else{
        int i = n - 1;
        while(a[i] >= a[i + 1]) i--;
        int k = n;
        while(a[k] < a[i]) k--;
        swap(a[k],a[i]);
        int left = i + 1, right = n;
        while (left < right) {
            swap(a[left], a[right]);
            left++;
            right--;
        }
        for(int i = 1;i <= n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}