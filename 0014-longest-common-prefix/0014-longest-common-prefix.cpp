class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
      int j=0;
      int i=0;
      int n =strs.size();
      for(int j=0;j<strs[0].size();j++){
        while(i<n-1){
          if(strs[i][j]==strs[i+1][j]){
            i++;
          }
          else{
            break;
          }
        }
        if(i==n-1){
          s+=strs[n-1][j];
          i=0;
        }
        else{
          break;
        }
      }
      return s;
    }
};