class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> countbits(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            countbits[i] = countbits[i >> 1] + (i & 1);
        }

        return countbits;
    }
};
