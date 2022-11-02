class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string> q;
        unordered_set<string> s;
        q.push(start);
        s.insert(start);
        int count=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                string node=q.front();
                q.pop();
                if(node==end){
                    return count;
                }
                for(char ch: "ACGT")
                {
                    for(int j=0;j<node.size();j++){
                        string adjnode=node;
                        adjnode[j]=ch;
                        if(!s.count(adjnode)&& find(bank.begin(),bank.end(),adjnode)!=bank.end()){
                            q.push(adjnode);
                            s.insert(adjnode);
                        }
                        
                    }
                }
            }
            count++;
        }
        return -1;
    }
};