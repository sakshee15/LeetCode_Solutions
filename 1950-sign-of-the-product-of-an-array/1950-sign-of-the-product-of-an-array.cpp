class Solution {
public:
    int arraySign(vector<int>& nums) {
         int n=0,p=0,z=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0) z++;
           else if(nums[i]>0) p++;
           else n++;
        }
        if(z) return 0;
        if(n%2!=0) return -1;
        else return 1;
    }
};