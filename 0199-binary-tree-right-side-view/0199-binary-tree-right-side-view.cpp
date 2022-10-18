/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        recursion(root,0,ans);
        return ans;
    }
    vector<int> recursion(TreeNode* root,int level,vector<int>&ans){
        if(root==NULL)
            return ans;
        TreeNode* node=root;
        if(level==ans.size()){
            ans.push_back(node->val);
        }
        recursion(node->right,level+1,ans);
        recursion(node->left,level+1,ans);
        
        return ans;
    }
};