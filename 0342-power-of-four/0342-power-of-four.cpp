class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n<=0)return false;
        double x = log10(n)/log10(4);
      cout<<x<<"->"<<(int)x<<endl;
     if(x==(int)x)
         return true;
     return false;
    }
};