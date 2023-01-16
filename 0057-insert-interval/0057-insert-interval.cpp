class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newy) {
     int i=0;
      while(i<intervals.size()){
        if(intervals[i][1]<newy[0]){
          i++;
        }
        else if(intervals[i][0]>newy[1]){
          intervals.insert(intervals.begin()+i,newy);
          return intervals;
        }
        else{
          newy[0]=min(intervals[i][0],newy[0]);
          newy[1]=max(intervals[i][1],newy[1]);
          intervals.erase(intervals.begin()+i);
          
        }
      }
      intervals.push_back(newy);
      return intervals;
    }
};