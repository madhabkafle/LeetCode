class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
      long long total=0;
       int n= tokens.size();
      for(int i=0;i<n;i++){
        if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
          long long x= st.top();
          st.pop();
          long long y= st.top();
          st.pop();
          if(tokens[i]=="+"){
            total=y+x;
           st.push(total);
          }
          else if(tokens[i]=="-"){
            total= y-x;
           st.push(total);
          }
          else if(tokens[i]=="/"){
            total=y/x;
           st.push(total);
          }
          else if(tokens[i]=="*"){
            total=y*x;
           st.push(total);
          }
        }
       else{
         st.push(stoi(tokens[i]));
       }
      }
      long long top = st.top();
      st.pop();
      return top;
    }
};