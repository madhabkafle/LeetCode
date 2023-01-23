class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> count(n+1);
      for(auto it: trust){
      int x=it[0];
        int y=it[1];
        count[x]--;
        count[y]++;
      }
      for(auto i=1;i<=n;i++){
        if(count[i]==n-1){
          return i;
        }
      }
      return -1;
    }
};