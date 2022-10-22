class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int startind;
        string ans="";
        int len=INT_MAX;
        int i=0,j=0;
        unordered_map<char,int> mp;
        for(auto &it : t){
            mp[it]++;
        }
        int count=mp.size();
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
                if(count>0){j++;}
               else if(count==0){
                    if(j-i+1<len){
                        len=j-i+1;
                        startind=i;
                        ans=s.substr(startind,len);
                    }
                while(count==0){
                    if(mp.find(s[i])==mp.end()){
                        i++;
                        if(j-i+1<len){
                            len=j-i+1;
                            startind=i;
                            ans=s.substr(startind,len);
                        }
                    }
                    else{
                        mp[s[i]]++;
                        if(mp[s[i]]==1){
                            i++;
                            count++;
                        }
                        else{
                            i++;
                            if(j-i+1<len){
                                len=j-i+1;
                                startind=i;
                                ans=s.substr(startind,len);
                            }
                        }
                    }
                }
                   j++;
            }
        }
        return len==INT_MAX?"":ans;
    }
};