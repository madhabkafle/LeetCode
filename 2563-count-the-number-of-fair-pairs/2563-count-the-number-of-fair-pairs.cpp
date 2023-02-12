class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
      long long count=0;
      int n=nums.size();
      int low=nums.size()-1;
      int high=nums.size()-1;
      sort(nums.begin(),nums.end());
      int i=0;
      while(i<n){
        int x=lower-nums[i],y=upper-nums[i];
        auto low= lower_bound(nums.begin()+i+1,nums.end(),x);
        auto high= upper_bound(nums.begin()+i+1,nums.end(),y);
        count+=high-low;
        i++;
      }
      return count;
    }
};