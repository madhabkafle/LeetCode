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
    void reverseOdd(TreeNode* &root1,TreeNode* &root2,int k) {
        if(root1== NULL||root2==NULL) return;
      if(k%2==0){
       swap(root1->val,root2->val);
      }
        reverseOdd(root1->left,root2->right,k+1);
        reverseOdd(root1->right,root2->left,k+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        int k=2;
        reverseOdd(root->left,root->right,k);
        return root;
    }
};