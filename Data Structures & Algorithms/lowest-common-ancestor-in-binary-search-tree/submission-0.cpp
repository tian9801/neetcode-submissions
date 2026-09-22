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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p, q);
    }



    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }
        if (root == p) {
            return p;
            //this subtree does contain one of those nodes
        }
        if (root == q) {
            return q;
        }


        TreeNode* left = dfs(root->left, p, q);
        TreeNode* right = dfs(root->right, p, q);

        // if ((left == q && right == p) || (left == p && right == q)) {
        //     return root;
        // }

        if (left != nullptr && right != nullptr) {
            return root;
        }
        if (left != nullptr) {
            return dfs(root->left, p, q);
        }
        if (right != nullptr) {
            return dfs(root->right, p, q);
        }
        return nullptr;
    }
};
