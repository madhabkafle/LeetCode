class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string str="";
        str=s+s;
        return str.find(goal)!=string::npos;
    }
};