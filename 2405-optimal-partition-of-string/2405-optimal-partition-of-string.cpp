class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        vector<int> lastseen(26,-1);
        int scs=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(lastseen[ch-'a']>=scs){
                cnt++;
                scs=i;
            }
            lastseen[ch-'a']=i;
        }
        return cnt+1;
    }
};