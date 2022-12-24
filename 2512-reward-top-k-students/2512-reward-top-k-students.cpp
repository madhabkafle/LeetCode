static bool compi(pair<int,int> x, pair<int,int> y){
    
        if(x.first == y.first){
            return x.second < y.second;
        }
        else{
            return x.first > y.first;
        }
    }

class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        
        
        unordered_map<string,int> hash;
        
        for(int i = 0 ; i < positive_feedback.size() ; i++){
            hash[positive_feedback[i]] = 3;
        }
        
        for(int i = 0 ; i < negative_feedback.size(); i++){
            hash[negative_feedback[i]] = -1;
        }
        
       
        vector<pair<int,int>> x;
        
        for(int i = 0 ; i < report.size(); i++){
            string now = report[i];
            
            int marks = 0;
            
            string temp = "";
            for(int ind = 0 ; ind < now.size() ; ind++){
                if(now[ind] == ' '){
                    marks += hash[temp];
                    
                    temp = "";
                }
                
                else{
                    temp += now[ind];
                }
            }
            
            marks += hash[temp];
            
            temp = "";
            
            x.push_back({marks,student_id[i]});
        }
        
        sort(x.begin(),x.end(),compi);
        vector<int> ans;
        
        int i = 0;
        while(k > 0){
            ans.push_back(x[i++].second);
        
            k--;
        }
		
        return ans;
        
    }
};