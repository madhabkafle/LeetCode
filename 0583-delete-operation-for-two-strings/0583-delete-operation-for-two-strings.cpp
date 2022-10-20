class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int l= helper(n,m,word1,word2,dp);
        cout<<l;
        int ans=(n-l)+(m-l);
        return ans;
    }
    int helper(int n,int m,string s1,string s2,vector<vector<int>>&dp){
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=m;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
        if(s1[i-1]==s2[j-1])
        dp[i][j]=1+dp[i-1][j-1];
        else
        dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
       return dp[n][m];
    }
};