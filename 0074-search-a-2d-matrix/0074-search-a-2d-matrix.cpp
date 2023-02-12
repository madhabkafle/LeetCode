class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
      int n=mat.size(),m=mat[0].size();
      int i=0,j=n*m -1;
      while(i<=j){
        int mid= (i+j)/2;
        if(mat[mid/m][mid%m]==target) //mat[mid/n][mid%n] (important)
          return true;
        else if(mat[mid/m][mid%m]<target)
          i=mid+1;
        else
          j=mid-1;
      }
      return false;
    }
};