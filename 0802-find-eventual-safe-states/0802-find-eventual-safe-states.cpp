class Solution {
public:
  bool dfs(int node,vector<int> &vis,vector<int> &pvis,vector<vector<int>>& graph,vector<int> &ans,vector<int> &check){
    vis[node]=1;
    pvis[node]=1;
    for(auto it: graph[node]){
      if(!vis[it]){
        if(dfs(it,vis,pvis,graph,ans,check)==true)
          return true;
      }
      else if(pvis[it]){
        return true;
      }
    }
    check[node]=1;
    pvis[node]=0;
    return false;
  }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int n= graph.size();
      vector<int> ans;
      vector<int> check(n,0);
        vector<int> vis(n,0);
        vector<int> pvis(n,0);
      for(int i=0;i<n;i++){
        if(!vis[i]){
        dfs(i,vis,pvis,graph,ans,check);
        }
      }
      for(int i=0;i<n;i++){
        if(check[i]==1){
          ans.push_back(i);
        }
      }
      return ans;
    }
};