class Solution {
public:
    bool check1(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]<s2[i])
                return false;
        }
        return true;
    }
    bool check2(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(s2[i]<s1[i])
                return false;
        }
        return true;
    }
    bool checkIfCanBreak(string s1, string s2) {
        return check1(s1,s2)==true||check2(s1,s2)==true?1:0;
    }
};