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
    vector<int> findMode(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }
        
        unordered_map<int, int> m;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* x = q.front();
            m[x->val]++;
            q.pop();
            if (x->left) q.push(x->left);
            if (x->right) q.push(x->right);
        }
        
        int mx = 0;
        vector<int> ans;
        
        for (auto &i : m) {
            if (i.second > mx) {
                mx = i.second;
                ans.clear();
                ans.push_back(i.first);
            } else if (mx == i.second) {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
