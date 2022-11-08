class Solution {
public:
    string makeGood(string s) {
       int n=s.size();
        string k;
       stack<char> st;
       for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(s[i]);
        }
           else {
               if(abs(st.top()-s[i])==32){
                   st.pop();
               }
               else
                   st.push(s[i]);
           }
        }
        while(!st.empty())
        {
            k+=st.top();
            st.pop();
        }    
        reverse(k.begin(),k.end());
        return k;
    }
};