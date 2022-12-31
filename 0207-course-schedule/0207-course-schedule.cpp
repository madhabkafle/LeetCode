class Solution {
public:
    bool dfs(int node,vector<int> &vis,vector<int> &pvis, vector<int> adj[]){
      vis[node]=1;
      pvis[node]=1;
      for(auto it:adj[node]){
        if(!vis[it]){
          if(dfs(it,vis,pvis,adj)==true)
            return true;
        }
        else if(pvis[it])
          return true;
      }
      pvis[node]=0;
      return false;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> vis(n,0);
      vector<int> pvis(n,0);
      vector<int> adj[n];
     for(int i=0;i<prerequisites.size();i++){
       int a=  prerequisites[i][0];
       int b=  prerequisites[i][1];
       adj[b].push_back(a);
     }
      for(int i=0;i<n;i++){
        if(!vis[i])
          if(dfs(i,vis,pvis,adj)==true)
            return false;
      }
      return true;
    }
};