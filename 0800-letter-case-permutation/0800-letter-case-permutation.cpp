class Solution {
public:
    void backtrack(vector<string> &ans, string &curr, const string &s, int start) {
        if (curr.length() == s.length()) {
            ans.push_back(curr);
            return;
        }

        if (isalpha(s[start])) {
            curr += tolower(s[start]);
            backtrack(ans, curr, s, start + 1);
            curr.pop_back();
            curr += toupper(s[start]);
            backtrack(ans, curr, s, start + 1);
            curr.pop_back();
        } else {
            curr += s[start];
            backtrack(ans, curr, s, start + 1);
            curr.pop_back();
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string curr = "";
        backtrack(ans, curr, s, 0);
        return ans;
    }
};
