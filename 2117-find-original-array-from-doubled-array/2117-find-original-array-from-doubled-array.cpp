class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(), changed.end());
        unordered_map<int,int> count;
        vector<int> ans;
        for(int i:changed){
            count[i]++;
        }
         for (int num : changed) {
            if (count[num] > 0) {
                int doubled = num * 2;
                if (num == 0) {
                    if (count[num] >= 2) {
                        ans.push_back(num);
                        count[num] -= 2;
                    } else {
                        return {};
                    }
                } else if (count[doubled] > 0) {
                    ans.push_back(num);
                    count[num]--;
                    count[doubled]--;
                } else {
                    return {};
                }
            }
        }
        
        return ans;

    }
};
