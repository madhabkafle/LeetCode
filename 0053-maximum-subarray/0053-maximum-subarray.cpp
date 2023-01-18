class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=INT_MIN;
       int sum=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        sum+=nums[i];
        result=max(sum,result);
        if(sum<=0){
          sum=0;
        }
      }
      return result;
    }
};