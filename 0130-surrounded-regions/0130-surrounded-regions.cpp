class Solution {
public:
  bool isvalid(int i,int j,int &n,int &m,vector<vector<char>>& b,vector<vector<char>>& img,vector<vector<int>>& vis){
    return i>=0&&j>=0&&i<n&&j<m&&b[i][j]=='O'&&!vis[i][j];
  }
   void dfs(int node1,int node2,int n,int m,vector<vector<char>>& b,vector<vector<char>>& img,vector<vector<int>>& vis){
     int trav[]={0,1,0,-1,0};
     img[node1][node2]='O';
     vis[node1][node2]=1;
     for(int i=0;i<4;i++){
       if(isvalid(node1+trav[i],node2+trav[i+1],n,m,b,img,vis)==true){
         dfs(node1+trav[i],node2+trav[i+1],n,m,b,img,vis);
       }
     }
   }
    void solve(vector<vector<char>>& b) {
        int n=b.size();
        int m=b[0].size();
      vector<vector<char>> img(n,vector<char>(m,'X'));
       vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        if(b[i][0]=='O'&&!vis[i][0]){
          vis[i][0]=1;
          dfs(i,0,n,m,b,img,vis);
        }
      }
      for(int j=0;j<m;j++){
        if(b[0][j]=='O'&&!vis[0][j]){
          vis[0][j]=1;
          dfs(0,j,n,m,b,img,vis);
        }
      }
      for(int i=0;i<n;i++){
        if(b[i][m-1]=='O'&&!vis[i][m-1]){
          vis[i][m-1]=1;
          dfs(i,m-1,n,m,b,img,vis);
        }
      }
      for(int j=0;j<m;j++){
        if(b[n-1][j]=='O'&&!vis[n-1][j]){
          vis[n-1][j]=1;
          dfs(n-1,j,n,m,b,img,vis);
        }
      }
    b=img;
    }
};