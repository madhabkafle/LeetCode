class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i=0;
      int j=0,n=nums.size();
      unordered_map<int,int> mp;
      int sum=0;
      int ans=0;
      mp[sum]=1;
      while(i<n){
        sum+=nums[i];
        if(mp.find(sum-k)!=mp.end()){
          ans+=mp[sum-k];
        }
        mp[sum]++;
        i++;
      }
      return ans;
    }
};