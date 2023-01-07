class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
      int i=n;
      if(n==1){
        v.push_back(0);
        return v;
      }
      if(n%2==0){
        
        while(i--){
          v.push_back(i);
      if(v.size()==n)
        break;
        v.push_back(-i);
        if(v.size()==n)
        break;
        }
        return v;
      }
      while(i--){
        v.push_back(i);
      if(v.size()==n-1)
        break;
        v.push_back(-i);
        if(v.size()==n-1)
        break;
      }
  v.push_back(0);
  return v;
    }
};