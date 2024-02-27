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
    int solve(TreeNode * root, int & max_value) {
        if (root) {
            int left = solve(root->left, max_value);
            int right = solve(root->right, max_value);
            max_value = max(max_value, left + right);  
            return 1 + max(left, right); 
        }
        return 0; 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max_value = 0;
        solve(root, max_value); 
        return max_value;
    }
};