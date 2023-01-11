class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
      set<vector<vector<int>>> s;
      vector<vector<int>> v;
      int n=mat.size();
      int m=mat[0].size();
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(mat[i][j]==0){
            v.push_back({i,j});
            cout<<i<<" "<<j<<" ";
            s.insert(v);
          }
        }
      }
   int p=0,q=0;
      for(auto x: s){
        for(int i=0,j=x[p++][1];i<n;i++){
          mat[i][j]=0;
        }
        for(int j=0,i=x[q++][j];j<m;j++){
          mat[i][j]=0;
        }
      }
    }
};