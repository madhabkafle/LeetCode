class Solution {
public:
    string reverseWords(string s) {
        int i=0,n=s.size();
      string str="";
      string result="";
      int x=n-1;
        string k=s;
      while(k[x]==' '){
        k.pop_back();
        x--;
      }
      n=k.size();
      while(i<n){
        while(i<n &&k[i]==' '){
          i++;
        }
        while(i<n && k[i]!=' '){
          str.push_back(k[i]);
          i++;
        }
        result = str + " " +result;
        
        str.clear();
        i++;
      }
      result.pop_back();
      return result;
    }
};