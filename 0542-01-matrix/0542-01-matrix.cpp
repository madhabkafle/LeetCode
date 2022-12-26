class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int steps=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m,0));
      queue<pair<pair<int,int>,int>> q;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(mat[i][j]==0){
        q.push({{i,j},0});
        vis[i][j]=1;
        }
        else{
          vis[i][j]=0;
        }
        //q.push(make_pair(make_pair(i,j),count))
      }
    }
      while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        steps=q.front().second;
        int trav[]={0,1,0,-1,0};
        q.pop();
        dist[r][c]=steps;
        for(int i=0;i<4;i++){
          if(r+trav[i]>=0 && r+trav[i]<n && c+trav[i+1]>=0 && c+trav[i+1]<m && vis[r+trav[i]][c+trav[i+1]]==0 ){
            vis[r+trav[i]][c+trav[i+1]]=1;
            q.push({{r+trav[i],c+trav[i+1]},steps+1});
          }
        }
      }
      return dist;
    }
};