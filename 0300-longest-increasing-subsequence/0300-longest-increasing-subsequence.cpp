class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int ans;
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        ans= helper(nums,0,-1,dp);
         return ans;
    }
    int helper(vector<int>& nums,int i,int prev,vector<vector<int>> &dp){
        if(i==nums.size())return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
       dp[i][prev+1]= 0+ helper(nums,i+1,prev,dp);
       
        if(prev == -1 || nums[i]>nums[prev]){
            dp[i][prev+1]=max(dp[i][prev+1],1+helper(nums,i+1,i,dp));
        }
        return dp[i][prev+1];
    }
};