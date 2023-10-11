// class Solution {
// public:
//     int fib(int n) {
//         if(n==0) return 0;
//         if(n==1) return 1;
//         return fib(n-1)+fib(n-2);
//     }
// };

class Solution {
public:
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        return calculateFibonacci(n, dp);
    }

    int calculateFibonacci(int n, vector<int>& dp) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (dp[n] != -1) return dp[n];
        
        dp[n] = calculateFibonacci(n - 1, dp) + calculateFibonacci(n - 2, dp);
        return dp[n];
    }
};

