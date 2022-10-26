//MATH MATH MATH
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int x=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            x+=nums[i];
            if(mp.find(x%k)==mp.end())
                mp[x%k]=i;
            else if(i-mp[x%k]>1)return true;
        }
        return false;
    }
};