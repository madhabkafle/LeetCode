class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int ans= fun(n,m,word1,word2,dp);
        return ans;
    }
    int fun(int i,int j,string s1,string s2,vector<vector<int>> &dp){
        if(i<=0) return j;
        if(j<=0) return i;
        if(s1[i-1]==s2[j-1])return 0+ fun(i-1,j-1,s1,s2,dp);
        if(dp[i][j]!=-1)return dp[i][j];
        int insertion= 1+ fun(i,j-1,s1,s2,dp); //insert
        int deletion= 1+fun(i-1,j,s1,s2,dp);  //delete
        int replace= 1+fun(i-1,j-1,s1,s2,dp); //replace
        return dp[i][j]=min({insertion,deletion,replace});
    }
};