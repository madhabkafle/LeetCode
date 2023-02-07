class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
      int n=nums.size();
      int maxi=0;
      int j=1;
      for(int i=0;i<n;i++){
        if(nums[i]==1){
          count++;
          maxi=max(maxi,count);
        }
        else{
          count=0;
        }
      }
      return maxi;
    }
};