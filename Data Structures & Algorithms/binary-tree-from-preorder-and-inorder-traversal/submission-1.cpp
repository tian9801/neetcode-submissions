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

    std::unordered_map<int, int> mapp;
    int index = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for (int i = 0; i < inorder.size(); i++) {
            mapp[inorder[i]] = i; 
        }
        
        return helper(preorder, 0, preorder.size() - 1);
        
    }

    TreeNode* helper(vector<int>& preorder, int l, int r) {
        if (l > r) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[index]);
        index++;

        
        int inorderIndex = (mapp[root->val]);


        root->left = helper(preorder, l, inorderIndex - 1);
        root->right = helper(preorder, inorderIndex + 1, r);
        return root;
    }
};
