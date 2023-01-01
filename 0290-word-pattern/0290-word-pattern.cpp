class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        s+=" ";
        string word="";
        for(auto ch:s){
          if(ch==' '){
            cout<<word<<",";
            words.push_back(word);
            word="";
          }
          else{
            word+=ch;
          }
        }
      unordered_map<char,string> mp1;
      unordered_map<string,bool> mp2;
      if(words.size()!=pattern.size()) return false;
     for(int i=0;i<pattern.size();i++){
       char chr=pattern[i];
       if(mp1[chr]==""){
         if(mp2[words[i]]==true){
           return false;
         }
         else{
           mp1[chr]=words[i];
           mp2[words[i]]=true;
         }
       }
       else{
         string mapped_with=mp1[chr];
         if(mapped_with!= words[i])
           return false;
       }
     }
      return true;
    }
};