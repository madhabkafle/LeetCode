class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int mini=1e9;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            if(sum<target){
                j++;
            }
            if(sum>=target){
            while(sum>=target){
                mini = min(mini,(j-i+1));
                sum-=nums[i];
                i++;
                }
               j++;
        }
        }
        return mini<1e9?mini:0;
    }
};