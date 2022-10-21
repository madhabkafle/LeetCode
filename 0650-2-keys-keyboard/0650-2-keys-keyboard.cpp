class Solution {
public:
    int minSteps(int n) {
        int current =1;
        int count=0;
        int buffer=0;
        while(current<n){
            int rest=n-current;
            if(rest%current==0){
                buffer=current;
                current+=buffer;
                count+=2;
            }
            else{
                current+=buffer;
                count++;
            }
        }
        return count;
    }
};