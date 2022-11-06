class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        if(k==1){
            string temp=s;
            for(int i=0;i<n;i++){
                s=s.substr(1)+s.substr(0,1);
                cout<<s<<" ";
               temp=min(s,temp);
            }
            return temp;
        }
        sort(s.begin(),s.end());
        return s;
    }
};