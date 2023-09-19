class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
        }
        for(auto &it: s){
            if(it.second>=2) return it.first;
        }
        return 0;
    }
};