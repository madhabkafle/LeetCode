class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
        int i=0;
        int j=n-1;
        int mini=0;
        int area=0;
        int maxi=0;
        while(i<j){
        int diff= j-i;
        if(height[i]<height[j]){
            area=height[i]*diff;
            maxi=max(maxi,area);
            i++;
        }
            else{
            area=height[j]*diff;
            maxi=max(maxi,area);
            j--;
            }
        
        }
        return maxi;
    }
};