class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int i=1,n=nums.size(),j=n-2;
      if(nums.size()==1) return 0;
      if(nums[0]>nums[1])return 0;
      if(nums[n-1]>nums[n-2])return n-1;
      while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
          return mid;
        else if(nums[mid]<nums[mid-1]){
          
           j=mid-1;
        }
        else if(nums[mid]<nums[mid+1]){
         i=mid+1;
        }
      }
      return -1;
    }
};