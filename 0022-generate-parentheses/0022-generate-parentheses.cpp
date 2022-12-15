class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string op="";
      vector<string> str;
      fun(str,op,n,n);
      return str;
    }
  void fun(vector<string> &str,string op,int open,int close){
    if(open==0 && close==0){
      str.push_back(op);
      return;
    }
    if(open!=0){
      string op1=op;
      op1.push_back('(');
      fun(str,op1,open-1,close);
    }
    // if(open==close){
    //   string op2=op;
    //   op2.push_back("(");
    //   fun(str,op2,open-1,close);
    // }
    if(open<close){
       string op2=op;
       op2.push_back(')');
      fun(str,op2,open,close-1);
    }
  }
};