class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
       int count=0;
        for(int i=0;i<n;i++){
          if(coins>=costs[i]){
            count=count+1;
            coins= coins-costs[i];
          }
        }
      return count;
    }
};