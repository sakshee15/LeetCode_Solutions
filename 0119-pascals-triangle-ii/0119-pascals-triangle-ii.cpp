class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        long long prev = 1;

        for (int i = 1; i <= rowIndex; i++) {
            long long curr = prev * (rowIndex - i + 1) / i;
            row[i] = static_cast<int>(curr);
            prev = curr;
        }

        return row;
    }
};
