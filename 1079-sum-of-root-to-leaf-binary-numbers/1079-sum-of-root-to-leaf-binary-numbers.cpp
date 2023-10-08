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
    int count = 0;

    void backtrack(TreeNode* root, string s) {
        if (root == NULL) {
            return;
        }
        s += to_string(root->val);
        if (root->left == NULL && root->right == NULL) {
            int val = 0;
            for (int i = 0; i < s.size(); i++) {
                val = val * 2 + (s[i] - '0'); // Convert char to int
            }
            count += val;
            return;
        }
        backtrack(root->left, s);
        backtrack(root->right, s);
    }

    int sumRootToLeaf(TreeNode* root) {
        string s = "";
        backtrack(root, s);
        return count;
    }
};
