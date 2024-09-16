#include <iostream>
#include <climits>
using namespace std;
int n1,n2,a[100],b[100],dp[1000];
int main()
{
    cin >> n1 >> n2;
    for(int i = 0;i < n1;i++) cin >> a[i];
    for(int i = 0;i < n2;i++) cin >> b[i];

    // mảng dp lưu các giá trị LCIS của mảng b
    for(int i = 0;i < n1;i++){
        int crr_len = 0;
        for(int j = 0;j < n2;j++){
            if(a[i] == b[j] && dp[j] < 1 + crr_len){
                // phải thoả mãn hai cái bằng nhau và crr_len + 1 thì phải lớn hơn trạng thái lúc trước
                dp[j] = crr_len + 1;
            }
            // tĩm cái phần tử chung nhỏ hơn cái a[i] hiện tại 
            if(a[i] > b[j] && dp[j] > crr_len){
                crr_len = dp[j];
            }
        }
    }
    int max = -INT_MIN;
    for(int i = 0;i < n2;i++){
        if(dp[i] > max) max = dp[i];
    }
    cout << max << endl;

}
