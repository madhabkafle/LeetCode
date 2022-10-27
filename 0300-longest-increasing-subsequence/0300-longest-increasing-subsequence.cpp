class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int ans;
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        ans= helper(nums,n,-1,dp);
         return ans;
    }
    int helper(vector<int>& nums,int ind,int pr,vector<vector<int>> &dp){
        for(int prev=0;prev<=pr;prev++){
            dp[nums.size()][prev];
        }
        
      for(int i=ind-1;i>=0;i--){
          for(int prev=i-1;prev>=-1;prev--){
              dp[i][prev+1]= 0+ dp[i+1][prev+1];
       
        if(prev == -1 || nums[i]>nums[prev]){
            dp[i][prev+1]=max(dp[i][prev+1],1+dp[i+1][i+1]);
        }

          }
      }
      return dp[0][0];
    }
};