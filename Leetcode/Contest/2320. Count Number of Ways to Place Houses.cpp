class Solution {
public:
    int countHousePlacements(int n) {
        if(n==1) return 4;
        if(n==2) return 9;
        long long dp[n];
        dp[0]=2;
        dp[1]=3;
        int mod=(int)1e9+7;
        for(int i=2;i<n;i++){
            dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
        }
        int a=(dp[n-1]%mod*dp[n-1]%mod)%mod;
        return a;
    }
};
