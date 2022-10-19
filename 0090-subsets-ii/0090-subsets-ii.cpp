class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,nums,v,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    void helper(int i,vector<int> &nums,vector<int> &v,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        helper(i+1,nums,v,ans);
        v.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        helper(i+1,nums,v,ans);
        
    }
};