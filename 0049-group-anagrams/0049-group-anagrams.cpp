class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto s: strs){
            string str= s;
            sort(str.begin(),str.end());
            mp[str].push_back(s);
            
        }
        for(auto it: mp){
            cout<<it.first<<" "<<endl;
            ans.push_back(it.second);
        }
        return ans;
    }
};