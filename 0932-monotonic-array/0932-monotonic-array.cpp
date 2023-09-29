class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count=0,count1=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<=nums[i]){
                count++;
            }
            if(nums[i-1]>=nums[i]){
                count1++;
            }
        }
        return count == n-1||count1==n-1;
    }
};