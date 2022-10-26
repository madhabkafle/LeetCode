class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int ans=0;
        int n=prices.size();
        int buy=1;
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        ans= help(0,buy,prices,fee,dp);
        return ans;
    }
       int help(int i, int buy,vector<int> &prices,int fee,vector<vector<int>>&dp){
        if(i==prices.size())return 0;
           if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy==1){ //buy 
         int p1=-prices[i]+help(i+1,0,prices,fee,dp);
         int p2= 0+ help(i+1,1,prices,fee,dp);
            return dp[i][buy]=max(p1,p2);
        }
        else{
            int pr1=(prices[i]-fee)+help(i+1,1,prices,fee,dp);
            int pr2=0+help(i+1,0,prices,fee,dp);
            return dp[i][buy]=max(pr1,pr2);
        }
    }
};