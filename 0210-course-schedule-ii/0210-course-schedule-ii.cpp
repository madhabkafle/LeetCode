class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int> ans;
      vector<int> ans1;
       vector<int> adj[n];
      for(int i=0;i<p.size();i++){
        adj[p[i][1]].push_back(p[i][0]);
      }
      queue<int> q;
      vector<int> indegree(n,0);
      for(int i=0;i<n;i++){
        for(auto it: adj[i]){
          indegree[it]++;
        }
      }
      for(int i=0;i<n;i++){
        if(indegree[i]==0){
          q.push(i);
        }
      }
      while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node]){
          indegree[it]--;
          if(indegree[it]==0)
            q.push(it);
        }
      }
      return ans.size()==n?ans:ans1;
    }
};