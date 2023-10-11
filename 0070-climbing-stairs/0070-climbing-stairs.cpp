class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        
        int prev1 = 1;
        int prev2 = 2;
        int count = 0;
        
        for (int i = 3; i <= n; i++) {
            count = prev1 + prev2;
            prev1 = prev2;
            prev2 = count;
        }
        
        return count;
    }
};
