class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int> mp;
        int i=0;
        int j=0,maxi=1,count=1;
        int n=f.size();
        while(j<n){
            mp[f[j]]++;
            if(mp.size()<2){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(mp.size()==2){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(mp.size()>2){
                while(mp.size()>2){
                    mp[f[i]]--;
                    if(mp[f[i]]==0)
                    mp.erase(f[i]);
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};