class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int count = 0;
        std::unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for (const auto& pair : map) {
            int n = pair.second;
            count += (n * (n - 1)) / 2;
        }

        return count;
    }
};