class Solution {
public:
   bool check(int i,vector<vector<int>>& graph,vector<int> &color){
     queue<int> q;
     q.push(i);
     color[i]=0;
     while(!q.empty()){
       int front = q.front();
       q.pop();
       for(auto x: graph[front]){
         if(color[x]==-1){
           color[x]=!color[front];
           q.push(x);
         }
         else if(color[x]==color[front]){
           return false;
         }
       }
     }
     return true;
   }
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
        vector<int> color(n,-1);
      for(int i=0;i<n;i++){
        if(color[i]==-1){
          if(check(i,graph,color)==false)
            return false;
        }
      }
     return true;
    }
};