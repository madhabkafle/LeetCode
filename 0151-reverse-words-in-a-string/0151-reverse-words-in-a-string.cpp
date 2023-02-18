class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
      string c="";
      string str="";
      st.push(',');
      for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
          st.push(s[i]);
        }
        else
          st.push(',');
      }
      while(!st.empty()){
        char ch=st.top();
        st.pop();
        if(ch!=','){
          c+=ch;
        }
        else if(ch==','){
          reverse(c.begin(),c.end());
          str=str+c+' ';
          c="";
        }
      }
      string ans="";
      int i=0;
        if(str[0]==' '){
          while(str[i]==' '){
            i++;
          }
          }
      int j=str.size()-1;
      if(str[j]==' '){
        while(str[j]==' '){
          j--;
        }
      }
      while(i<=j){
            ans+=str[i];
            i++;
      }
      int k=0;
      string sans="";
      while(k<ans.size()){
        int z=k;
        if(ans[k]!=' '){
          sans+=ans[k];
          k++;
        }
        else if(ans[k]==' '){
          z=k+1;
          sans+=' ';
          while(ans[z]==' '){
            z++;
          }
          k=z;
        }
      }
      return sans;
    }
};