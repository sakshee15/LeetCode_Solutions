class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permutation(res, nums, 0);
        return res;
    }

    void permutation(vector<vector<int>>& res, vector<int>& nums, int l) {
        if (l==nums.size()) {
            res.push_back(nums);
        } else {
            for (int i = l; i <nums.size(); i++) {
                swap(nums[l], nums[i]);
                permutation(res, nums, l + 1);
                swap(nums[l], nums[i]);
            }
        }
    }
};
