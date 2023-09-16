class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int pairs = 0, singles = 0;
        
        for (int num : nums) {
            freqMap[num]++;
        }
        
        for (const auto& [num, freq] : freqMap) {
            pairs += freq / 2;
            singles += freq % 2;
        }
        
        return {pairs, singles};
    }
};
