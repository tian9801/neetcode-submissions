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
    int max = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        traverse(root);
        return max;


    }

    int traverse(TreeNode* root) {
        if (root == nullptr) {
            return -1;
        }
        int left = traverse(root->left);
        int right = traverse(root->right);
        int count = left + right + 2;
        if (count > max) {
            max = count;
        }
        return 1 + std::max(left, right);
    }


};
