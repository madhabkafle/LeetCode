class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& que) {
    vector<vector<int>> mat(n+1,vector<int>(n+1,0)),ans(n,vector<int>(n,0));
      for(auto &q:que){
        int r1=q[0];
        int c1=q[1];
        int r2=q[2];
        int c2=q[3];
        mat[r1][c1]++;
        mat[r1][c2+1]--;
        mat[r2+1][c1]--;
        mat[r2+1][c2+1]++;
      }
      for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
          mat[i][j]+=mat[i][j-1];
        }
      }
      for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
          mat[i][j]+=mat[i-1][j];
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          ans[i][j]=mat[i][j];
        }
      }
      return ans;
    }
};