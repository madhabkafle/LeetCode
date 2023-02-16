class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,n=nums.size(),j=n-1;
      while(i<=j){
        int mid=(i+j)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(nums[mid]<=nums[prev]&&nums[mid]<=nums[next])
          return nums[mid];
        else if(nums[mid]<=nums[j]){
          j=mid-1;
        }
        else if(nums[mid]>=nums[i]){
          i=mid+1;
      }
    }
      return -1;
    }
};