//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      bool detect(int src,vector<int> adj[], int visi[]){
          visi[src]=1;
        queue<pair<pair<int,int>,int>> q;
        q.push({{src,-1},1});
        while(!q.empty()){
            int node=q.front().first.first;
            int parent= q.front().first.second;
            int vis=q.front().second;
            q.pop();
            for(auto it: adj[node]){
             if(!visi[it]){
             visi[it]=1;
             q.push({{it,node},visi[it]});
            }
            else if(parent != it){
                return true;
            }
           
            }
        }
        return false;
      }
      bool isCycle(int V, vector<int> adj[]) {
       int visi[V]={0};
       for(int i=0;i<V;i++){
           if(!visi[i]){
               if(detect(i,adj,visi)==true)
               return true;
           }
       }
       return false;
    } 
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends