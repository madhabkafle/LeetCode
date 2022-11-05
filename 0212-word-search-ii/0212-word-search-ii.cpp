//# COPIED , THANKS FOR VISITING SANDEEPAN KALITA :)
class TrieNode {
public:
    char c;
    string word;
    unordered_map<char, TrieNode*> next;
    TrieNode(char chr) {
        c = chr;
        word = "";
    }
    
    bool hasNextChar(char chr) {
        return next.find(chr) != next.end();
    }
};

class Solution {
public:
    int n;
    int m;
    vector<vector<int>> dirs = {
        {1,0},{0,1},{-1,0},{0,-1}
    };
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        unordered_set<string> s;
        m = board.size();
        n = board[0].size();
        TrieNode* root = buildTrie(words);
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                char c = board[i][j];
                if(root->hasNextChar(c)) {
                    vector<vector<int>> visited(m, vector<int>(n, 0));
                    find(s, board, visited, root->next[c], i, j);                
                }
            }
        }
        
        vector<string> res(s.begin(), s.end());
        return res;
    }
    
    void find(
        unordered_set<string>& s,
        vector<vector<char>>& board,
        vector<vector<int>>& visited,
        TrieNode* node,
        int i,
        int j
    ) {
        if(visited[i][j]) return;
        if(node->word != "") s.insert(node->word);
        visited[i][j] = 1;
        
        for(auto &dir : dirs) {
            int row = dir[0] + i;
            int col = dir[1] + j;
            
            if(row >= m || row < 0 || col >= n || col < 0) continue;
            char c = board[row][col];
            if(node->hasNextChar(c)) {
                find(s, board, visited, node->next[c], row, col);    
            }
        }
        visited[i][j] = 0;
    }
    
    TrieNode* buildTrie(vector<string>& words) {
        TrieNode* root = new TrieNode(0);
        
        for(auto &w : words) {
            TrieNode* r = root;
            for(auto &c : w) {
                if(!r->hasNextChar(c)) {
                    r->next[c] = new TrieNode(c);
                }
                r = r->next[c];
            }
            r->word = w;
        }
        return root;
    }
};