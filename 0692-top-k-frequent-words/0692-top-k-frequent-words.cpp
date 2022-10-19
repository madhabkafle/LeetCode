class Solution {
#define psi pair<int, string>
    class myComparator {
        public: 
        bool operator()(const psi &p1,const psi &p2){
            if(p1.first==p2.first) return p1.second<p2.second;
            
            return p1.first>p2.first;
        }
    };
    
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int> mp;
        int n=words.size();
        for(auto i: words){
            mp[i]++;
        }
        priority_queue<psi,vector<psi>,myComparator> pq;
        vector<string> v(k);
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({it->second,it->first});
            if(pq.size()>k){
                while(pq.size()>k){
                    pq.pop();
                }
            }
        }
        int m=k-1;
        while(!pq.empty()){
           v[m--]=pq.top().second;
           
            pq.pop();
        }
       
        return v;
    }
};