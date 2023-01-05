class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string str="";
      int n=s.size();
      long long x=0;
      long long sum=0;
      for(int i=n-1;i>=0;i--){
        x= (x+shifts[i])%26;
        s[i]= (s[i]- 'a' + x)%26 +'a';
      }
      return s;
    }
};