class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        int n=m.size();
        int k=m[0].size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<k-1;j++){
                if(m[i][j]!=m[i+1][j+1]){
                    return false;
                }
            }
        }
        return true;
    }
};
