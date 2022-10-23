class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
       int n=nums.size();
        int sum= accumulate(nums.begin(),nums.end(),0);
        set<int> s;
        for(auto &i: nums){
            s.insert(i);
        }
        int sum1=accumulate(s.begin(),s.end(),0);
        int ans1=abs(sum-sum1);
        n=n+1;
        int sum2= n* (n-1)/2;
        int ans2=abs(sum2-sum1);
        return {ans1,ans2};
    }
};
//1,2,2,3,5,6,7,8,9,10