class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newy) {
     int i=0;
      vector<vector<int>> ans;
        
      while(i<intervals.size()){
        if(intervals[i][1]<newy[0]){
        ans.push_back({intervals[i]});
          i++;
        }
        else if(intervals[i][0]>newy[1]){
          break;
        }
        else{
          newy[0]=min(intervals[i][0],newy[0]);
          newy[1]=max(intervals[i][1],newy[1]);
          i++;
        }
      }
      ans.push_back(newy);
      while(i<intervals.size()){
        ans.push_back({intervals[i]});
        i++;
      }
      return ans;
    }
};