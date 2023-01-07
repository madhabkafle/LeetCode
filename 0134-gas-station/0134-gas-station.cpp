class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int balance=0;
      int amount=0;
      int start=0;
      for(int i=0;i<n;i++){
        balance+=gas[i]-cost[i];
        if(balance<0){
          amount+=balance;
          start=i+1;
          balance=0;
        }
      }
      if(balance+amount>=0)
        return start;
      else return -1;
    }
};