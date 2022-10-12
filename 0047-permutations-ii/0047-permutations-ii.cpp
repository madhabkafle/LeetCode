class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int n=nums.size();
        recper(nums,ans,0);
        return ans;
    }
      void recper(vector<int>&nums, vector<vector<int>>&ans,int ind){
          if(ind==nums.size()){
              ans.push_back(nums);
              return;
          }
          set<int>s;
        for(int i=ind;i<nums.size();i++){
            if(s.find(nums[i])!=s.end())
                continue;
            s.insert(nums[i]);
            swap(nums[i],nums[ind]);
            recper(nums,ans,ind+1);
            swap(nums[ind],nums[i]);
        }
    }
};