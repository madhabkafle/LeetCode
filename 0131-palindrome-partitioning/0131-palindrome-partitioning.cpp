class Solution {
public:
  int n;
    bool ispal(string &s, int l,int m){
        while(l<m){
          if(s[l]!=s[m]){
            return false;
          }
          l++;
          m--;
        }
      return true;
      }
    vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    n=s.size();
    vector<string> curr;
     backtrack(s,0,curr,ans);
      return ans;
    }
  void backtrack(string s,int idx,vector<string> &curr,vector<vector<string>> &ans){
    if(idx==n){
      ans.push_back(curr);
      return;
    }
    for(int i=idx;i<n;i++){
      if(ispal(s,idx,i)==true){
        curr.push_back(s.substr(idx,i-idx+1));
        backtrack(s,i+1,curr,ans);
        curr.pop_back();
      }
    }
  }
};