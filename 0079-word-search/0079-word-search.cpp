class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        string s;
        int n=board.size();
        int m=board[0].size();
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if((board[i][j]==word[0] && dfs(board,i,j,0,word)))
               return true;
               
           }
       }
        return false;
    }
    bool dfs(vector<vector<char>>& b,int i,int j,int count, string word){
       if(count==word.size()){
           return true;
       }
        if(i==-1|| i==b.size()||j==-1||j==b[0].size()||b[i][j]!=word[count])
            return false;
        
        char temp=b[i][j];
        b[i][j]='*';
        bool find = dfs(b,i+1,j,count+1,word)||
                    dfs(b,i,j+1,count+1,word)||
                    dfs(b,i-1,j,count+1,word)||
                    dfs(b,i,j-1,count+1,word);
        b[i][j]=temp;
        return find;
    }
};