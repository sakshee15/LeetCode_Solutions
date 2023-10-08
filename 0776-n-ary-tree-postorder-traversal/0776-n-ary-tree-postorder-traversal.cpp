/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans; // Return an empty vector when root is NULL
        }

        for (int i = 0; i < root->children.size(); i++) {
            vector<int> childResult = postorder(root->children[i]);
            ans.insert(ans.end(), childResult.begin(), childResult.end());
        }

        ans.push_back(root->val);
        return ans;
    }
};
