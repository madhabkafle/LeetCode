class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        
        int ans=coin(coins,n,amount);
        return ans;
    }
    int coin(vector<int>& coins,int ind,int amt){
        vector<vector<int>> dp(ind,vector<int>(amt+1,0));
        for(int i=0;i<=amt;i++){
            dp[0][i]=(i%coins[0]==0);
        }
       for(int i=1;i<ind;i++){
           for(int j=0;j<=amt;j++){
                int not_pick=dp[i-1][j];
      int pick=0;
        if(coins[i]<=j)
            pick=dp[i][j-coins[i]];
        
    dp[i][j]=pick+not_pick;;
           }
       }

     return  dp[ind-1][amt];
    }
};