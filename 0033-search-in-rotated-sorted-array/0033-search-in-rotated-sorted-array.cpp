class Solution {
public:
    int find_index(vector<int>& nums){
        int start=0,end=nums.size()-1,mid;
        int n=nums.size();
        while(start<=end){
            mid=start+(end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<=nums[prev]&&nums[mid]<=nums[next]){
                return mid;
            }
             if(nums[mid]<=nums[end]){
                end=mid-1;
            }
           else if(nums[mid]>=nums[start]){
                start=mid+1;   
            }
            
        }
        return -1;
    }
    int bs(int start,int end,vector<int>& nums,int target){
         int n=nums.size();
      int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start=mid+1;
            else 
                end=mid-1;
    }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
          int start=0;
        int end=nums.size()-1;
       int index=find_index(nums);
       int val1=bs(start,index-1,nums,target);
        int val2=bs(index,end,nums,target);
      return val1==-1?val2:val1;
    }
};