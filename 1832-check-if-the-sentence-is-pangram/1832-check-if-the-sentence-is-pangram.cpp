class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        int n=sentence.size();
        for(int i=0;i<n;i++){
            mp[sentence[i]]++;
        }
         for(int i=97;i<=122;){
        for(auto it: mp){
         cout<<i<<" ";
          
            if(it.first !=(char)i)
                return false;
           else i++;
        }
         }
        return true;
    }
};