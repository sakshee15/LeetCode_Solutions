class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
        int n=nums.size();
        int len = n/3;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto &i:map){
            if(i.second>len){
               ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};