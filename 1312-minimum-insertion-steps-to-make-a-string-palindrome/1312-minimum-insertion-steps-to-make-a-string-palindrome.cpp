class Solution {
public:
    int minInsertions(string s1) {
        int n= s1.size();
        int m=n;
        string s2=s1;
        
        reverse(s2.begin(),s2.end());
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        int l= lps(s1,s2,m,n,dp);
        int ans = n-l;
        return ans;
    }
    int lps(string s1,string s2,int m, int n,vector<vector<int>>&dp){
        for(int i=0;i<=m;i++)
       {
           dp[i][0]=0;
       }
        for(int j=0;j<=n;j++)
       {
           dp[0][j]=0;
       }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1])
            dp[i][j]= 1+dp[i-1][j-1];
        else
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    
//TLE in memoization
//     int lps(string s1,string s2,int m, int n,vector<vector<int>>&dp){
//         if(n<0  || m< 0)return 0;
//         if(dp[m][n]!=-1)return dp[m][n];
//         if(s1[m]==s2[n])
//             return 1+ lps(s1,s2,m-1,n-1,dp);
        
//         return dp[m][n]=max(lps(s1,s2,m-1,n,dp), lps(s1,s2,m,n-1,dp));
//     }
};