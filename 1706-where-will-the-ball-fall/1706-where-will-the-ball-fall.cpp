class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
      int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m,-1);
        for(int j=0;j<m;j++){
            int currpos=j;
            int npos=-1;
            for(int i=0;i<n;i++){
                npos=currpos + grid[i][currpos];
                if(npos<0 || npos>=m || grid[i][currpos] != grid[i][npos]){
                    currpos=-1;
                    break;
                }
                currpos=npos;
            }
            ans[j]=currpos;
        }
        return ans;
    }
};