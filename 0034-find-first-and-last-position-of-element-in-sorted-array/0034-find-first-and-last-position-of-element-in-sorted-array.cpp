class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());

        vector<int> ans = {-1, -1};
        int i = 0, j = nums.size() - 1;

        while (i <= j) {
            if (nums[i] == target) {
                ans[0] = i;
            }
            if (nums[j] == target) {
                ans[1] = j;
            }
            if (nums[i] != target) {
                i++;
            }
            if (nums[j] != target) {
                j--;
            }
            if (ans[0] != -1 && ans[1] != -1) {
                break;
            }
        }

        return ans;
    }
};
