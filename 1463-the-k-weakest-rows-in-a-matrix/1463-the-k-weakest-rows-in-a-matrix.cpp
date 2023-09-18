class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      vector<pair<int, int>> row_counts;
    for (int i = 0; i < mat.size(); ++i) {
        int soldierCount = count(mat[i].begin(), mat[i].end(), 1);
        row_counts.push_back({i, soldierCount});
    }

    sort(row_counts.begin(), row_counts.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second == b.second ? a.first < b.first : a.second < b.second;
    });
    
    vector<int> weakest_rows;
    for (int i = 0; i < k; ++i) {
        weakest_rows.push_back(row_counts[i].first);
    }
    
    return weakest_rows;
    }
};