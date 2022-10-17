class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int>dp(n+1,-1);
        return mincosts(days,costs,0,dp);
    }
    int mincosts(vector<int>& days, vector<int>& costs,int ind, vector<int>&dp){
        int n=days.size();
        if(ind>=n) return 0;
       if(dp[ind]!=-1)return dp[ind];
        int cost_day= costs[0]+mincosts(days,costs,ind+1,dp);
        int i;
        for( i=ind;i<n and days[i]<days[ind]+7; i++);
            int cost_week= costs[1]+mincosts(days,costs,i,dp);
     
        for(i=ind;i<n and days[i]<days[ind]+30;i++);
            int cost_mon= costs[2]+mincosts(days,costs,i,dp);
        return dp[ind]=min({cost_day,cost_week,cost_mon});
    }
};