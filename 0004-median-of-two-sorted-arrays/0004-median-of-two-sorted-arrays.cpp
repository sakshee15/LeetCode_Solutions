class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size(), m = nums2.size(), i = 0, j = 0;
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        while (i < n) {
            ans.push_back(nums1[i]);
            i++;
        }
        
        while (j < m) {
            ans.push_back(nums2[j]);
            j++;
        }
        
        int total = ans.size();
        double median = 0;
        
        if (total % 2 == 0) {
            median = (ans[total / 2] + ans[(total / 2) - 1]) / 2.0;
        } else {
            median = ans[total / 2];
        }
        
        return median;
    }
};
