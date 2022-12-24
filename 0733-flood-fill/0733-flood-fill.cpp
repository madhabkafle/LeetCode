class Solution {
public:
   bool isvalid(int i,int j, int &n,int &m,vector<vector<int>> &mat,vector<vector<int>> &vis,int color,int change){
     return i>=0&&j>=0&&i<n&&j<m&&!vis[i][j]&&mat[i][j]==change;
   }
    void dfs(int sr,int sc,vector<vector<int>> &mat,vector<vector<int>> &vis,int n,int m,int color,int change){
      vis[sr][sc]=1;
      mat[sr][sc]=color;
      int trav[]= {0,1,0,-1,0};
      for(int k=0;k<4;k++){
        if(isvalid(sr+trav[k],sc+trav[k+1],n,m,mat,vis,color,change)){
          mat[sr][sc]=color;
          dfs(sr+trav[k],sc+trav[k+1],mat,vis,n,m,color,change);
        }
      }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      int n= image.size();
      int m= image[0].size();
      int change=image[sr][sc];
      vector<vector<int>>mat(n,vector<int>(m,0));
      mat=image;
       vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=sr;i<sr+1;i++){
        for(int j=sc;j<sc+1;j++){
          if(vis[i][j]==0&& mat[i][j]==image[sr][sc]){
            vis[i][j]=1;
            dfs(i,j,mat,vis,n,m,color,change);
          }
        }
      }
      return mat;
    }
};