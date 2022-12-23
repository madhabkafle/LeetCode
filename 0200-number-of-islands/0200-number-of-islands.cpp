class Solution {
public:
   bool isvalid(int i,int j,vector<vector<char>>& b, vector<vector<int>>&vis,int &n,int &m){
      return i>=0&&i<n&&j>=0&&j<m&&b[i][j]=='1' &&vis[i][j]==0;
  }
  void dfs(int node1,int node2,vector<vector<char>>& grid,vector<vector<int>>& vis,int &n,int &m){
    vis[node1][node2]=1;
    int trav[]={0,1,0,-1,0};
    for(int i=0;i<4;i++){
      if(isvalid(node1+trav[i],node2+trav[i+1],grid,vis,n,m))
        dfs(node1+trav[i],node2+trav[i+1],grid,vis,n,m);
    }
  }
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
      int n= grid.size();
      int m= grid[0].size();
       vector<vector<int>> vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]=='1' && vis[i][j]==0){
            vis[i][j]=1;
            count++;
            dfs(i,j,grid,vis,n,m);
          }
        }
      }
      return count;
    }
};