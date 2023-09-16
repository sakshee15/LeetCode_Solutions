class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>map;
        int pair=0,left=0;
        for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
        }
        for(auto &i:map){
            pair+=i.second/2;
            left+=i.second%2;
        }
        return {pair,left};
    }
};