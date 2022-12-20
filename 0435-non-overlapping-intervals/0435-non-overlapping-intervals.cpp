class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& ans) {
        sort(ans.begin(),ans.end()); 
      int count=0;
       int j=0,i=1,n=ans.size();
      while(i<n){
        // case 1
        if(ans[j][1]<=ans[i][0]){
          j=i;
          i++;
        }
      else if(ans[j][1]<=ans[i][1]){ // case 2
        count++;
        i++;
      }
        else if(ans[j][1]>ans[i][1]){ //case 3
          count++;
          j=i;
          i++;
        }
      }
      return count;
    }
};