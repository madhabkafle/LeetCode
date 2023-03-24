class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n= matrix.size();
        int m=matrix[0].size();
        int count=0;
        int total=n*m;
        int srow=0;
        int scol=0;
        int erow=n-1;
        int ecol=m-1;
        while(count<total){
            for(int i=srow;count<total&&i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;
            for(int i=srow;count<total&&i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;
            for(int i=ecol;count<total&&i>=scol;i--){
                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;
            for(int i=erow;count<total&&i>=srow;i--){
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
        }
        return ans;
    }
};