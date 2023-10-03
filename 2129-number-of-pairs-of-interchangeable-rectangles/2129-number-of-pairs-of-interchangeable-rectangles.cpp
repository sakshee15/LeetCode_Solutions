class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, long long> map;
        long long count = 0;

        for (int i = 0; i < rectangles.size(); i++) {
            double a = static_cast<double>(rectangles[i][0]) / rectangles[i][1];
            map[a]++;
        }

        for (const auto &pair : map) {
            long long n = pair.second;
            count += (n * (n - 1)) / 2; 
        }

        return count;
    }
};
