class Solution {
public:
    int tilt=0;
    int findTilt(TreeNode* root) {
        fun(root);
        return tilt;
    }
    int fun(TreeNode* root){
        if(root==NULL)
            return 0;
        
        int left=fun(root->left); // sum of left subtree
        int right=fun(root->right); // sum of right subtree
        
        tilt+=abs(left-right); // add tilt
        return root->val+left+right; // return sum
    }
};