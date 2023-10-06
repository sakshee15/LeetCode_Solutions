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
    void backtrack(TreeNode* root, vector<int>& temp, long long sum, int targetSum) {
        if (root == NULL) return;
        sum += root->val;
        temp.push_back(root->val);
        long long tmp = sum;
        for (int i = 0; i < temp.size(); i++) {
            if (tmp == targetSum) count++;
            tmp -= temp[i];
        }

        backtrack(root->left, temp, sum, targetSum);
        backtrack(root->right, temp, sum, targetSum);
        temp.pop_back();
        sum -= root->val;
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        long long sum = 0;
        backtrack(root, temp, sum, targetSum);
        return count;
    }
};
