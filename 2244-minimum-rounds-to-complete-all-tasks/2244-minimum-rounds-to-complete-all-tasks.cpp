class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
      
     unordered_map<int,int> mp;
      for(auto it:tasks){
        mp[it]++;
      }
      int count=0;
      for(auto &x: mp){
        int num= x.second;
        if(num==1)
          return -1;
        if(num%3==0){
          count+=num/3;
        }
        else{
          count+=num/3+1;
        }
    }
      return count;
    }
};