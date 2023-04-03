class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                nums[j]=nums[i+1];
                j++;
                i++;
            }
        }
        return j;
    }
};