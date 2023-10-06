class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> map;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());
        int prev=0;
        for(int i:nums1){
            if(prev!=i){
                map[i]++;
                prev=i;
            }
        }
        prev=0;
        for(int i:nums2){
            if(prev!=i){
                map[i]++;
                prev=i;
            }
        }
        prev=0;
        for(int i:nums3){
            if(prev!=i){
                map[i]++;
                prev=i;
            }
        }
        for(auto &i:map){
            if(i.second>=2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};