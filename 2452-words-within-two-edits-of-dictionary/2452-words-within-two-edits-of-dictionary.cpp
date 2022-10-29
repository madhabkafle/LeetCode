class Solution {
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& d) {
       
        vector<string> ans;
        int n=q.size();
        int m=d.size();
        int k=0;
       
        for(int i=0;i<n;i++){
             string s1=q[i];
            for(int j=0;j<m;j++){
               
                string s2=d[j];
              for(int m=0;m<s1.size();m++){
                if(s1[m]!=s2[m]){
                    k++;
                }}
                    if(k<=2){
                       ans.push_back(s1);
                        k=0;
                        break;
                    }
                k=0;
            }
          }
        return ans;
    }
};