class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        string s1=s;
        reverse(s.begin(),s.end());
        int m=s1.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        return ans(n,m,s,s1,dp);
    }
    int ans(int n,int m,string s1,string s2,vector<vector<int>> &dp){
       for(int i=0;i<=n;i++)
       {
           dp[i][0]=0;
       }
        for(int j=0;j<=m;j++)
       {
           dp[0][j]=0;
       }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
        }
        else
        dp[i][j]=0+max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
      
    }
};
