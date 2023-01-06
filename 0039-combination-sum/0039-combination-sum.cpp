class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
      int n= candidates.size();
      vector<int> v;
      int sum=0;
      fun(0,sum,n,candidates,target,ans,v);
      return ans;
    }
   void fun(int i,int sum,int n,vector<int> can,int target,vector<vector<int>> &ans,vector<int> &v){
     if(sum==target)
     {
       ans.push_back(v);
       return;
     }
     if(sum>target){
       return;
     }
       sum =sum+can[i];
       v.push_back(can[i]);
       fun(i,sum,n,can,target,ans,v);
       v.pop_back();
       sum=sum-can[i];
       if(i<n-1){
       fun(i+1,sum,n,can,target,ans,v);
       }
     }
};