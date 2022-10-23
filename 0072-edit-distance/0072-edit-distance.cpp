class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int ans= fun(n,m,word1,word2,dp);
        return ans;
    }
    int fun(int n,int m,string s1,string s2,vector<vector<int>> &dp){
        for(int i=1;i<=n;i++){
            dp[i][0]=i;
        }
        for(int j=1;j<=m;j++){
            dp[0][j]=j;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
             if(s1[i-1]==s2[j-1])dp[i][j]= 0 + dp[i-1][j-1];
        else{
        int insertion= 1+ dp[i][j-1]; //insert
        int deletion= 1+dp[i-1][j];//delete
        int replace= 1+dp[i-1][j-1]; //replace
        dp[i][j]=min({insertion,deletion,replace});
        }
            }
        }
        return dp[n][m];
    }
};