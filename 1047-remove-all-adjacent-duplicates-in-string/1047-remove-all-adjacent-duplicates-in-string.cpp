class Solution {
public:
    string removeDuplicates(string s) {
     string k;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            k.push_back(st.top());
            st.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
};