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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return dfs(root, subRoot);
    }


    bool dfs(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr || subRoot == nullptr) {
            return false;
        }
        if (root->val == subRoot->val) {
            if(identical(root, subRoot)) { return true; }
        }
        bool left = dfs(root->left, subRoot);
        bool right = dfs(root->right, subRoot);
        return left || right;
    }

    bool identical(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) {
            return true;
        } 
        if (root == nullptr || subRoot == nullptr) {
            return false;
        } 
        if (root->val != subRoot->val) {
            return false;
        } 
        
        return identical(root->left, subRoot->left) && identical(root->right, subRoot->right);
    }
};
