class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int> m;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            if(pre_sum-goal==0)
                ans++;
            
            if(m.find(pre_sum-goal)!=m.end()){
                ans+=m[pre_sum-goal];
            }
            m[pre_sum]++;
        }
        return ans;
    }
};