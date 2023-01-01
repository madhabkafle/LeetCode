class Solution {
public:
  void primeFactors(int n,set<int> &s)
{
   int c=2;
    while(n>1)
    {
        if(n%c==0){
          s.insert(c);
        n/=c;
        }
        else c++;
    }
}
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;
        int pr=1;
       for(int i=0;i<nums.size();i++){
        primeFactors(nums[i],s);
       }
      
      return s.size();
    }
};