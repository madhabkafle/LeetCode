class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<int> selected(26,0);
        int n=arr.size();
        int len=0;
        return helper(0,arr,selected,n,len);
    }
    bool compare(vector<int>&selected, string &currstring)
    {
        vector<int> selfcompare(26,0);
        for(int i=0;i<currstring.size();i++){
            char c=currstring[i];
            if(selfcompare[c-'a']==1)return false;
            selfcompare[c-'a']=1;
        }
        for(int i=0;i<currstring.size();i++){
            if(selected[currstring[i]-'a']==1) return false;
        }
        return true;
    }
    int helper(int i,vector<string>arr,vector<int>selected,int n,int len){
        
        if(i==arr.size()){
            return len;
        }
        string s=arr[i];
       if(compare(selected,s)==false){
           return helper(i+1,arr,selected,n,len);
       }
        else {
        //pick
        for(int j=0;j<s.size();j++){
                selected[s[j]-'a']=1;
        }
         len+=s.size();
         int op1=  helper(i+1,arr,selected,n,len);
         //not pick
         for(int j=0;j<s.size();j++){
                selected[s[j]-'a']=0;
        }
            len-=s.size();
            int op2=helper(i+1,arr,selected,n,len);
            return max(op1,op2);
            }
           
        }
};