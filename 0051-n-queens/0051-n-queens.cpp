class Solution {
public:
    void fun(vector<vector<string>>& ans, vector<string>& board, int n, int col, vector<int>& r, vector<int>& ld, vector<int>& rd) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (r[i] == 0 && ld[i + col] == 0 && rd[n - 1 + col - i] == 0) {
                board[i][col] = 'Q';
                r[i]++;
                ld[i + col]++;
                rd[n - 1 + col - i]++;
                fun(ans, board, n, col + 1, r, ld, rd);
                board[i][col] = '.';
                r[i]--;
                ld[i + col]--;
                rd[n - 1 + col - i]--;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.')); // Initialize board with '.' characters
        vector<int> r(n, 0), ld(2 * n - 1, 0), ud(2 * n - 1, 0);
        fun(ans, board, n, 0, r, ld, ud);
        return ans;
    }
};
