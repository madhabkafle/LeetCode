class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int goal=0;
        int i=0;
        while(i<=goal){
            goal=max(goal,nums[i]+i);
            if(goal>=n-1)return true;
            i++;
        }
        return false;
    }
};