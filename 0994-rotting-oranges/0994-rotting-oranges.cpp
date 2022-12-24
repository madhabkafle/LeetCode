class Solution {
public:
    bool isvalid(int i,int j,int &n,int &m,vector<vector<int>>& mat,vector<vector<int>>& vis){
      return i>=0&&j>=0&&i<n&&j<m&&!vis[i][j]&&mat[i][j]==1;
    }
    int orangesRotting(vector<vector<int>>& grid) {
      int n= grid.size();
      int m= grid[0].size();
      vector<vector<int>> mat(n,vector<int>(m,0));
      vector<vector<int>> vis(n,vector<int>(m,0));
      mat=grid;
      int count=0;
      int time=0;
      queue<pair<int,pair<int,int>>> q;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(mat[i][j]==2)
          {
            vis[i][j]=1;
            q.push({0,{i,j}});
          }
        }
      }
      int trav[]={0,1,0,-1,0};
      while(!q.empty()){
          int node1=q.front().second.first;
          int node2=q.front().second.second;
          time=q.front().first;
          q.pop();
          vis[node1][node2]=1;
          for(int i=0;i<4;i++){
          if(isvalid(node1+trav[i],node2+trav[i+1],n,m,mat,vis)){
            count=max(time+1,count);
            vis[node1+trav[i]][node2+trav[i+1]]=1;
            mat[node1+trav[i]][node2+trav[i+1]]=2;
            q.push({count,{node1+trav[i],node2+trav[i+1]}});
          }
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(mat[i][j]!=0 && grid[i][j]!=2 && mat[i][j]==grid[i][j]){
             return -1;
           }
        }
      }
     return count;
    }
};