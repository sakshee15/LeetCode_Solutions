class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> map;
        vector<int> ans;
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        unordered_set<int> s3(nums3.begin(),nums3.end());
        for(int i:s1) map[i]++;
        for(int i:s2) map[i]++;
        for(int i:s3) map[i]++;
        for(auto &i:map){
            if(i.second>=2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};