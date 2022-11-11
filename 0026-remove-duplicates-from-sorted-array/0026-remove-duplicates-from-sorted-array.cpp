class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int ind=0;
        int i=0;
        while(i<n){
            while(i<n-1&&nums[i]==nums[i+1]){
                i++;
            }
            nums[ind++]=nums[i];
            i++;
        }
        return ind;
    }
};