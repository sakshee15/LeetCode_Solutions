class Solution {
public:
    int countHomogenous(string s) {
        const int MOD = 1e9 + 7;
        long long cnt = 0;
        int consecutiveCount = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                consecutiveCount++;
            } else {
                cnt = (cnt + (static_cast<long long>(consecutiveCount) * (consecutiveCount + 1) / 2) % MOD) % MOD;
                consecutiveCount = 1;
            }
        }

        cnt = (cnt + (static_cast<long long>(consecutiveCount) * (consecutiveCount + 1) / 2) % MOD) % MOD;

        return static_cast<int>(cnt);
    }
};