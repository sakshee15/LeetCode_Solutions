class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        if (s.size() < 3) return 0;

        for (int i = 2; i < s.size(); i++) {
            if (s[i] != s[i - 1] && s[i] != s[i - 2] && s[i - 1] != s[i - 2]) {
                count++;
            }
        }

        return count;
    }
};
