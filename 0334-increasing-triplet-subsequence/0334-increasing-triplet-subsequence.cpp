class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int left=INT_MAX;
        int j=0;
        int mid=INT_MAX;;
       for(int i=0;i<n;i++){
         if(nums[i]>mid) return true;
           if(nums[i]<left)
               left=nums[i];
           if(nums[i]>left)
               mid=nums[i];
    }
        return false;
    }
};