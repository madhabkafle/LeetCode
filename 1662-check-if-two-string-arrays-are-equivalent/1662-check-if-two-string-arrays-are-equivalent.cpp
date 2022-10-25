class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        int n=word1.size();
        int m=word2.size();
        for(int i=0;i<n;i++){
            s1+=word1[i];
        }
        for(int i=0;i<m;i++){
            s2+=word2[i];
        }
        int k= abs(n-m)+n;
        for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++){
            if(s1[i]!=s2[i])
                return false;
        }
        return true;
    }
};