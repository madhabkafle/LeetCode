class Solution {
public:
    bool haveConflict(vector<string>& ev1, vector<string>& ev2) {
       if(ev2[0] <= ev1[1] && ev2[1] >= ev1[0]) return true;
        return false;
    }
};