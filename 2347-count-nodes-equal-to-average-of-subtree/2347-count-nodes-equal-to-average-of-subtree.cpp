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
    int x = 0;
    pair<int,int> solve(TreeNode* root){
        if(root==NULL)return {0,0};
        pair<int,int> p1 = solve(root->left);
        pair<int,int> p2 = solve(root->right);
        int x1 = p1.first+p2.first+root->val;
        int y = p1.second+p2.second+1;
        if(root->val == (x1/y)){
            x++;
        }
        return {x1,y};
    }
    int averageOfSubtree(TreeNode* root) {
        x = 0;
        solve(root);
        return x;
    }
};