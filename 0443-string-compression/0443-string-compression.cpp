class Solution {
public:
    int compress(vector<char>& ch) {
       int n=ch.size();
        int i=0,ans=0;
        while(i<n){
            int j=i+1;
           
                while(j<n&&ch[i]==ch[j]){
                    j++;
                }
            
          int count=j-i;
            ch[ans++]=ch[i];
            string c;
            if(count>1){
             c=to_string(count);
            }
            for(auto it: c){
                ch[ans++]=it;
            }
            i=j;
        }
        return ans;
    }
};