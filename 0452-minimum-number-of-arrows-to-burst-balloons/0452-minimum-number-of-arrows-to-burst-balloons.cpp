class Solution {
  static bool cmp(const vector<int> &p1,const vector<int> &p2){
      return p1[1]<p2[1];
  }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
      int n=points.size();
      sort(points.begin(),points.end(),cmp);
      int arp=points[0][1];
      int arrows=1;
      for(int i=1;i<n;i++){
        if(arp>=points[i][0]){
          continue;
        }
        arrows++;
        arp=points[i][1];
      }
      return arrows;
   }
};