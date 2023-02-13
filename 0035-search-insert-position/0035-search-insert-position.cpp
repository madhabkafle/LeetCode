class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int n=j+1;
      int alt=-1;
      while(i<=j){
        int mid=(i+j)/2;
        if(nums[mid]==target)
          return mid;
        else if(nums[mid]>target){
          alt=mid;
          j=mid-1;
        }
        else
          i=mid+1;
      }
      return alt==-1?n:alt;
    }
};