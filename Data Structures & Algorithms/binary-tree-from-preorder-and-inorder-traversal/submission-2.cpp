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
    int preIndex = 0;

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,
                     int left, int right) {
        if (left > right) {
            return nullptr;
        }

        // First preorder element is the root
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        // Find root in inorder
        int mid = left;
        while (inorder[mid] != rootVal) {
            mid++;
        }

        // Build left and right subtrees
        root->left = helper(preorder, inorder, left, mid - 1);
        root->right = helper(preorder, inorder, mid + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, inorder.size() - 1);
    }
};
