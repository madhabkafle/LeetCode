class Solution {
public:
    string removeDuplicates(string s) {
      string str ="";
      stack<char> st;
      st.push(s[0]);
      for(int i=1;i<s.size();i++){
        if(st.empty()==false && s[i]==st.top()){
          st.pop();
        }
        else{
          st.push(s[i]);
        }
      }
   while(!st.empty()){
     char ch= st.top();
     str.push_back(ch);
     st.pop();
   }
      reverse(str.begin(),str.end());
      return str;
    }
};