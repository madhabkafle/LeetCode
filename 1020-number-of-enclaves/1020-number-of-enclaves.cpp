class Solution {
public:
    bool isvalid(int i,int j,int &n,int &m,vector<vector<int>>& grid,vector<vector<int>>& img,vector<vector<int>>& vis){
      return i>=0&&j>=0&&i<n&&j<m&&grid[i][j]==1&&!vis[i][j];
    }
  void  dfs(int node1,int node2,int &n,int &m,vector<vector<int>>& grid,vector<vector<int>>& img,vector<vector<int>>& vis){
    vis[node1][node2]=1;
    img[node1][node2]=1;
    int trav[]={0,1,0,-1,0};
    for(int i=0;i<4;i++){
      if(isvalid(node1+trav[i],node2+trav[i+1],n,m,grid,img,vis)==true){
        dfs(node1+trav[i],node2+trav[i+1],n,m,grid,img,vis);
      }
    }
  }
    int numEnclaves(vector<vector<int>>& grid) {
        int moves=0;
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>> img(n,vector<int>(m,0));
      vector<vector<int>> vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        if(grid[i][0]==1 &&!vis[i][0]){
          vis[i][0]=1;
          dfs(i,0,n,m,grid,img,vis);
        }
      }
      for(int i=0;i<m;i++){
        if(grid[0][i]==1 &&!vis[0][i]){
          vis[0][i]=1;
          dfs(0,i,n,m,grid,img,vis);
        }
      }
      for(int i=0;i<m;i++){
        if(grid[n-1][i]==1 &&!vis[n-1][i]){
          vis[n-1][i]=1;
          dfs(n-1,i,n,m,grid,img,vis);
        }
      }
      for(int i=0;i<n;i++){
        if(grid[i][m-1]==1 &&!vis[i][m-1]){
          vis[i][m-1]=1;
          dfs(i,m-1,n,m,grid,img,vis);
        }
      }
      int counts=0;
      int ans=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]==1){
            counts++;
          }
          if(img[i][j]==1){
            moves++;
          }
        }
      }
      return ans=abs(moves-counts);
    }
};