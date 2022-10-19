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
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        helper(i+1,v,ans,nums);
        v.pop_back();
        helper(i+1,v,ans,nums);
        
    }
};