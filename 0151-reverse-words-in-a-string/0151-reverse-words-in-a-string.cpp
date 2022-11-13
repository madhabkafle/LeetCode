class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string str="";
        string ans="";
       stack<string> st;
        for(int i=0;i<n;i++){
        if(s[i]==' '){
            if(str.size()>0){
                st.push(str);
                str="";
            }
        }
            else{
                str=str+s[i];
            }
        }
            ans = ans + str;
            while(!st.empty()){
                ans = ans +" "+ st.top();
                st.pop();
            }
            if(ans.size()!=0 && ans[0]==' '){
                ans = ans.substr(1);
            }
            return ans;
    }
};