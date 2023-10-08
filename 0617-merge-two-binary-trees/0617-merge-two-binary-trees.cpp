// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void sum(TreeNode* root1, TreeNode* root2){
//     if(root1 == NULL && root2 == NULL) return;
//     if(root1->left && root2->left){
//         root1->left->val = root1->left->val + root2->left->val;
//     }
//     if(root1->left==NULL && root2->left){
//         TreeNode* node = new TreeNode(root2->left->val);
//         root1->left = node;
//     }
//     if(root1->left && root2->left==NULL)root1->left->val=root1->left->val+0;
//     if(root1->right && root2->right){
//         root1->right->val = root1->right->val + root2->right->val;
//     }
//     if(root1->right==NULL && root2->right){
//         TreeNode* node = new TreeNode(root2->right->val);
//         root1->right = node;
//     }
//     if(root1->right && root2->right==NULL)root1->right->val=root1->right->val+0;
//     sum(root1->left, root2->left);
//     sum(root1->right, root2->right);
// }

//     TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//         if(root1 && root2){
//             root1->val=root1->val + root2->val;
//         }
//         if(root1 && !root2)root1->val=root1->val+0;

//         if(!root1 && root2){
//            TreeNode* node=new TreeNode(root2->val);
//            root1=node;
//         }
//         sum(root1,root2);
//         return root1;
//     }
// };
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return nullptr;
        } else if (root1 == nullptr) {
            return root2;
        } else if (root2 == nullptr) {
            return root1;
        } else {
            root1->val += root2->val;
            root1->left = mergeTrees(root1->left, root2->left);
            root1->right = mergeTrees(root1->right, root2->right);
            return root1;
        }
    }
};
