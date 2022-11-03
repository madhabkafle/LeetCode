class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n= words.size();
        unordered_map<string,int> mp;
        for(auto it: words){
            mp[it]++;
        }
        int count=0;
             bool flag=false;
        for(auto s: words){
   
        string k= s;
        reverse(s.begin(),s.end()); 
      
        if(s!=k && mp[s]>0 && mp[k]>0){
         count+=4;
         mp[s]--;
         mp[k]--;
        }
        else if(s==k && mp[s]>1){
            count+=4;
            mp[s]-=2;
        }
            else if(s==k && !flag && mp[k]>0){
                
                count+=2;
                mp[s]--;
                flag=true;
            }
      }
       return count;
  }
};