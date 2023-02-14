class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,n=nums.size(),j=n-1;
        int alt1= floor(nums,target);
        int alt2= ceil(nums,target);
        vector<int> ans;
      ans.push_back(alt1);
      ans.push_back(alt2);
      return ans;
    }
  int floor(vector<int>& nums, int x){
    int i=0,n=nums.size(),j=n-1;
    int alt1=-1;
    while(i<=j){
      int mid=(i+j)/2;
      if(nums[mid]==x){
        alt1=mid;
        j=mid-1;
      }
      else if(nums[mid]>x){
        j=mid-1;
      }
      else
        i=mid+1;
    }
    return alt1;
  }
   int ceil(vector<int>& nums, int x){
    int i=0,n=nums.size(),j=n-1;
     int alt2=-1;
     while(i<=j){
        int mid=(i+j)/2;
      if(nums[mid]==x){
        alt2=mid;
        i=mid+1;
      }
      else if(nums[mid]>x){
        j=mid-1;
      }
      else
        i=mid+1;
     }
     return alt2;
   }
};