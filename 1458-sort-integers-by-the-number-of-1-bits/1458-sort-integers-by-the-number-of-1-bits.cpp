class Solution {
public:
    int countBits(int num) {
        int count = 0;
        while (num > 0) {
            if (num & 1) {
                count++;
            }
            num >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> a;
        for (int num : arr) {
            int count = countBits(num);
            a[count].push_back(num);
        }

        vector<int> ans;
        for (auto &j : a) {
            sort(j.second.begin(), j.second.end());  // Sort numbers with the same bit count
            for (int i = 0; i < j.second.size(); i++) {
                ans.push_back(j.second[i]);
            }
        }
        return ans;
    }
};