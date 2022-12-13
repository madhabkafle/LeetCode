#define MOD 1000000007
class Solution {
public:
    long long int power(int x,long long int r){
        if(r==1)
            return x;
        if(!r)
            return 1;
        if(r&1){
            long long int R=power(x,r/2);
            return (R*R*x)%MOD;
        }
        else
        {
            long long int R=power(x,r/2);
            return (R*R)%MOD;
        }
    }
    
    int countGoodNumbers(long long n) {
        if((n&1)==0)
            return (power(5,n/2) * power(4,n/2))%MOD;
        return (power(5,n/2+1) * power(4,n/2))%MOD;
    }
};