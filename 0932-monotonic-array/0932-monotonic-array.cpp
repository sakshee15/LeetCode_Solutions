class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count=0,count1=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<=nums[i]){
                count++;
            }
            if(nums[i-1]>=nums[i]){
                count1++;
            }
        }
        return count == nums.size()-1||count1==nums.size()-1;
    }
};