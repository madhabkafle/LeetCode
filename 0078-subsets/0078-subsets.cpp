class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int> v;
      vector<vector<int>> ans;
      int n=nums.size();
     helper(0,v,ans,nums) ;
        return ans;
    }
    void helper(int i,vector<int> &v,vector<vector<int>> &ans,vector<int> &nums){
            ans.push_back(v);
        for(int j=i;j<nums.size();j++){
            v.push_back(nums[j]);
            helper(j+1,v,ans,nums);
            v.pop_back();
        }
    }
};