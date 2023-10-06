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
//     void backtrack(TreeNode* root,vector<string> &ans, string &s){
//         string temp;
//         if(s.empty()){
//             temp= to_string(root->val);
//         }else{
//             temp="->"+to_string(root->val);
//         }
//          s+= temp;
//         if(root->left==NULL && root->right==NULL){   
//             ans.push_back(s);
//             s = s.substr(0, s.size() - temp.size());
//             return;
//         }
//         if(root->left){
//             backtrack(root->left,ans,s);
//            s = s.substr(0, s.size() - temp.size());
//         }
//         if(root->right){
//             backtrack(root->right,ans,s);
//            s = s.substr(0, s.size() - temp.size());
//         }
        

//     }
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> ans;
//         string s="";
//         backtrack(root,ans,s);
//         return ans;
//     }
// };
class Solution {
public:
    void backtrack(TreeNode* root, vector<string>& ans, string s) {
        if (root == nullptr) {
            return;
        }
        
        if (!s.empty()) {
            s += "->";
        }
        s += to_string(root->val);
        
        if (root->left == nullptr && root->right == nullptr) {   
            ans.push_back(s);
        } else {
            backtrack(root->left, ans, s);
            backtrack(root->right, ans, s);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s;
        backtrack(root, ans, s);
        return ans;
    }
};
