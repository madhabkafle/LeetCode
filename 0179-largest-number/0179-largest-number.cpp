class Solution {
public:
static bool cmp(int i1,int i2){
  string s1=to_string(i1),s2=to_string(i2);
    return s1+s2>s2+s1;
  return true;
}
    string largestNumber(vector<int>& nums) {
       string s="";
      sort(nums.begin(),nums.end(),cmp);
      for(int i=0;i<nums.size();i++){
        string ch;
        ch=to_string(nums[i]);
        s+= ch;
      }
      if(s[0]=='0'){
        s="";
        s+='0';
      }
      return s;
    }
};