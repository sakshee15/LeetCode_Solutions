class Solution {
public:
    void backtrack(vector<string> &ans, string &curr, int a, int b, int n) {
        if (curr.length() == 2 * n && a == 0 && b == 0) {
            ans.push_back(curr);
            return;
        }
        if (a > 0) {
            curr += '(';
            backtrack(ans, curr, a - 1,b+1, n);
            curr.pop_back();
        }
        if (b > 0) {
            curr += ')';
            backtrack(ans, curr, a,b-1, n);
            curr.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "(";
        backtrack(ans, curr, n - 1, 1, n);
        return ans;
    }
};
