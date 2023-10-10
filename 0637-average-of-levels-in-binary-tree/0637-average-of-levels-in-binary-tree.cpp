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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> averages;
        std::queue<TreeNode*> rootQueue;
        int queueSize;
        double total;
        rootQueue.push(root);
        while (rootQueue.size() > 0) {
            queueSize = rootQueue.size();
            total = 0;
            for (int i = 0; i < queueSize; i++) {
                TreeNode* tree = rootQueue.front();
                total = total + tree->val;
                if (tree->left != nullptr) {
                    rootQueue.push(tree->left);
                }
                if (tree->right != nullptr) {
                    rootQueue.push(tree->right);
                }
                rootQueue.pop();
            }
            total = total / queueSize;
            averages.push_back(total);
        }
        return averages;
    }
};