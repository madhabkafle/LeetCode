class Solution {
public:
    string reverseVowels(string s) {
       int i=0;
       int n=s.size();
       int j=n-1;
       while(i<j){
           if((s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')&&(s[j]=='A'||s[j]=='a'||s[j]=='E'||s[j]=='e'||s[j]=='I'||s[j]=='i'||s[j]=='O'||s[j]=='o'||s[j]=='U'||s[j]=='u')){
               swap(s[i],s[j]);
               i++;
               j--;
           }
           else if((s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')&&(s[j]!='A'||s[j]!='a'||s[j]!='E'||s[j]!='e'||s[j]!='I'||s[j]!='i'||s[j]!='O'||s[j]!='o'||s[j]!='U'||s[j]!='u'))
    j--;
    else 
    i++;
       }
       return s;
    }
};