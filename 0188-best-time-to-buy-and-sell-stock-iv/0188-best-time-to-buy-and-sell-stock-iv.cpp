class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int buy=1;
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        ans= helper(n,prices,k,1,dp);
        return ans;
    }
    int helper(int n, vector<int> &prices, int l,int b,vector<vector<vector<int>>>&dp){
       
       for(int i=n-1;i>=0;i--){
           for(int buy=0;buy<=1;buy++){
               for(int limit=1;limit<=l;limit++){
                  if(buy==1){
            int p1=-prices[i]+dp[i+1][0][limit];
            int p2=0+dp[i+1][1][limit];
            dp[i][buy][limit]= max(p1,p2);
        }
        else{ //sell
            int pr1=prices[i]+dp[i+1][1][limit-1];
            int pr2=dp[i+1][0][limit];
            dp[i][buy][limit]= max(pr1,pr2);
        } 
     }
  }
}
        return dp[0][1][l];
    }
};