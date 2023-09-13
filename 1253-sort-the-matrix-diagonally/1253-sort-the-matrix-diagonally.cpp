class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(col, 0));

        // Process diagonals starting from the first column
        for (int i = 0; i < col; i++) {
            vector<int> temp;
            int r = 0, c = i;

            while (r < row && c < col) {
                temp.push_back(mat[r][c]);
                r++;
                c++;
            }

            sort(temp.begin(), temp.end());

            r = 0;
            c = i;
            int j = 0;

            while (r < row && c < col) {
                ans[r][c] = temp[j];
                r++;
                j++;
                c++;
            }
        }

        // Process diagonals starting from the first row
        for (int i = 1; i < row; i++) {
            vector<int> temp;
            int r = i, c = 0;

            while (r < row && c < col) {
                temp.push_back(mat[r][c]);
                r++;
                c++;
            }

            sort(temp.begin(), temp.end());

            r = i;
            c = 0;
            int j = 0;

            while (r < row && c < col) {
                ans[r][c] = temp[j];
                r++;
                j++;
                c++;
            }
        }

        return ans;
    }
};
