class Solution {
public:
    string removeDuplicates(string s, int k) {
        string str="";
        stack<pair<char,int>> st;
        int cnt=1;
        st.push({s[0],cnt});
        for(int i=1;i<s.size();i++){
            if(!st.empty()&&st.top().first == s[i]){
                ++st.top().second;
            }
            else{
                st.push({s[i],cnt});
            }
             if(st.top().second==k){
                    st.pop();
            }
        }
        
        while(!st.empty()){
            while(st.top().second--){
            str.push_back(st.top().first);
            }
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};