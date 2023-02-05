class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int j=0;
      // int i=0;
      int x=0;
      int n=nums.size();
      while(j<n){
     for(int i=0;i<n;i++){
       if(nums[i]==j)
       {
         x=1;
       }
     }
        if(x==1){
          x=0;
          
        }
        else
          return j;
        j++;
    }
      return j;
    }
};