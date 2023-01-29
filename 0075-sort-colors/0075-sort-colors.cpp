class Solution {
public:
    void sortColors(vector<int>& nums) {
     int i=0;
    int j=0;
      int n=nums.size();
      for(;i<n;i++){
        if(nums[i]==0){
          swap(nums[i],nums[j]);
          j++;
        }
      }
      i=0;
      for(;i<n;i++){
        if(nums[i]==1){
          swap(nums[i],nums[j]);
          j++;
        }
      }
      i=0;
      for(;i<n;i++){
        if(nums[i]==2){
          swap(nums[i],nums[j]);
          j++;
        }
      }
    }
};