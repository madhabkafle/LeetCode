class Solution {
public:
  int n;
    vector<vector<int>> findSubsequences(vector<int>& nums) {
      n=nums.size();
     vector<vector<int>> ans;
      vector<int> v;
      solve(0,v,nums,ans);
      return ans;
    }
 void solve(int idx,vector<int>& v,vector<int>& nums,vector<vector<int>> &ans){
    
    if(v.size()>=2){
      ans.push_back(v);
    }
    unordered_set<int> s;
    for(int i=idx;i<n;i++){
      if((v.empty()||nums[i]>=v.back())&&(s.find(nums[i])==s.end())){
        v.push_back(nums[i]);
        solve(i+1,v,nums,ans);
        v.pop_back();
        s.insert(nums[i]);
      }
    }
  }
};