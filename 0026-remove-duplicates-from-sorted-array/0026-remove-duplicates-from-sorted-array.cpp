class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
      int j=0;
      int n=nums.size();
     while(i<n){
       while(i<n-1&&nums[i]==nums[i+1]){
         i++;
       }
       nums[j++]=nums[i];
       i++;
     }
      return j;
    }
};