import java.util.Scanner;

public class CoinProblem3 {
    public static final long m = 1000000007;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int[] a = new int[n+1];
        int[][] dp = new int[n+1][c+1];
        for(int i = 0;i < n;i++){
            a[i] = sc.nextInt();
        }
        dp[0][0] = 1;
        for(int i = 1;i <= n;i++){
            for(int j = 0;j <= c;j++){
                dp[i][j] = dp[i-1][j] % m;
                if(j >= a[i-1]) dp[i][j] += dp[i][j-a[i-1]];
                dp[i][j] %= m;
            }
        }
        System.out.println(dp[n][c]);
    }
}
