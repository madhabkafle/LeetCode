//Trace reminders
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      int n=nums.size();
     vector<int> count(k);
      count[0]=1;
      int prefix=0,ans=0;
      for(auto i:nums){
        prefix= (prefix+i%k+k)%k;
        ans=ans+count[prefix];
        count[prefix]++;
      }
      return ans;
    }
};