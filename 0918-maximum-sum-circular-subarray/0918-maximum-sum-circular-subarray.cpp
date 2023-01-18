class Solution {
public:
    int n;
  int minsum=INT_MAX;
    int maxSubarraySumCircular(vector<int>& nums) {
      n=nums.size();
      vector<int> num=nums;
         minsum=minSubArray(nums);
      int sum=0;
      sum=accumulate(num.begin(),num.end(),0);
      int cirsum= sum-minsum;
      int maxsum=maxSubArray(num);
      if(cirsum>0)
        return max(maxsum,cirsum);
      return maxsum;
    }
  int minSubArray(vector<int>& nums) {
        int result=INT_MAX;
       int sum=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        sum+=nums[i];
        result=min(sum,result);
        if(sum>=0){
          sum=0;
        }
      }
      return result;
    }
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