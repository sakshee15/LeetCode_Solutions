class Solution {
public:
    bool isAr(vector<int>& nums, int& l, int& r) {
        if (r - l + 1 < 2) return false;
        vector<int> temp(nums.begin() + l, nums.begin() + r + 1);
        sort(temp.begin(), temp.end());
        int diff = temp[1] - temp[0];
        for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i + 1] - temp[i] != diff) return false;
        }
        return true;
    }


    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for (int i = 0; i < l.size(); i++) {
            int a = r[i];
            bool r = isAr(nums, l[i], a);
            res.push_back(r);
        }
        return res;
    }
};