import java.util.Scanner;

public class CoinProblemWithJava{
    public static final int N = 1000005;
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int[] a = new int[n];
        int[] dp = new int[c+1];
        for(int i = 0;i < n;i++){
            a[i] = sc.nextInt();
        }
        for(int i = 0;i <= c;i++){
            dp[i] = N;
        }
        dp[0] = 0;
        for(int i = 1;i <= c;i++){
            for(int j = 0;j < n;j++){
                if(a[j] <= i){
                    dp[i] = Math.min(dp[i],1 + dp[i-a[j]]);
                }
            }
        }
        if(dp[c] == N) System.out.print(-1);
        else System.out.println(dp[c]);
    }
}