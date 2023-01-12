class Solution {
public:
  int dfs(int curr,int parent,vector<vector<int>>& edges, vector<bool>& has,unordered_map<int,vector<int>> &adj){
    int time=0;
    for(auto &it: adj[curr]){
      if(it==parent)
        continue;
      
      int time_to_pick= dfs(it,curr,edges,has,adj);
      if(time_to_pick>0||has[it]==true)
        time+=time_to_pick+2;
    }
    return time;
  }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& has) {
        unordered_map<int,vector<int>> adj;
      for(auto x: edges){
        int u=x[0];
        int v=x[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
      }
      return dfs(0,-1,edges,has,adj);
    }
};