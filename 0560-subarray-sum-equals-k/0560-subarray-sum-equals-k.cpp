class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0, currSum = 0;
        unordered_map<int, int> sumFrequency;
        sumFrequency[0] = 1;  // Initialize with a sum of 0 seen once.
        
        for (int r = 0; r < nums.size(); r++) {
            currSum += nums[r];
            if (sumFrequency.find(currSum - k) != sumFrequency.end()) {
                cnt += sumFrequency[currSum - k];
            }
            sumFrequency[currSum]++;
        }
        
        return cnt;
    }
};
