bool cmp(const pair<int,int> &a,const pair<int,int> &b){
if(a.second>b.second) return true;
return false;
    }
class Solution {

public:
    int earliestFullBloom(vector<int>& plant, vector<int>& grow) {
        int n=plant.size();
        int m=grow.size();
        vector<pair<int,int>> pr;
        for(int i=0;i<n;i++){
            pr.push_back(make_pair(plant[i],grow[i]));
        }
        sort(pr.begin(),pr.end(),cmp);
        int bloomDay=0,seedplantday=0;
        for(auto it:pr){
            int ptime=it.first;
            int gtime=it.second;
            bloomDay= max(bloomDay,seedplantday+ptime+gtime);
            seedplantday+=ptime;
        }
    return bloomDay;
    }
};