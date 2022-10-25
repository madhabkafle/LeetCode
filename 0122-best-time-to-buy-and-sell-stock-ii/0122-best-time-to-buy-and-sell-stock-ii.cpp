class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int cost=0;
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            cost= prices[i]-mini;
            if(cost>=0){
                profit+=cost;
            }
            mini=prices[i];
        }
        return profit;
    }
};