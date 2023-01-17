class Solution {
public:
  int n;
    int minFlipsMonoIncr(string s) {
       n=s.size();
      vector<vector<int>>  t(n+1, vector<int>(2, -1));
      
      return solve(0,0,s,t);
    }
  int solve(int curi,int prev,string &s,vector<vector<int>>& t){
    if(curi>=n){
      return 0;
    }
     if(t[curi][prev] != -1)
            return t[curi][prev];
    int flip=INT_MAX;
    int nflip=INT_MAX;
    if(s[curi]=='0'){
      if(prev==1){
        flip=1+solve(curi+1,1,s,t);
      }
      else{
        flip=1+solve(curi+1,1,s,t);
        nflip=solve(curi+1,0,s,t);
      }
    }
    else if(s[curi]=='1'){
      if(prev==0){
        flip=1+solve(curi+1,0,s,t);
        nflip=solve(curi+1,1,s,t);
      }
      else{
        nflip=solve(curi+1,1,s,t);
      }
    }
    return t[curi][prev] =  min(flip, nflip);
  }
};