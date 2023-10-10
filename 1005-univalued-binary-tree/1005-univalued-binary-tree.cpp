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
// class Solution {
// public:
//     bool isUnivalTree(TreeNode* root) {
//         int uniVal=root->val;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             TreeNode* temp = q.front();
//             q.pop();
//             if(temp->val!=uniVal) return false;
//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return isUnival(root, root->val);
    }
    
    bool isUnival(TreeNode* node, int targetVal) {
        if (node == nullptr) {
            return true;
        }
        
        if (node->val != targetVal) {
            return false;
        }
        
        return isUnival(node->left, targetVal) && isUnival(node->right, targetVal);
    }
};
