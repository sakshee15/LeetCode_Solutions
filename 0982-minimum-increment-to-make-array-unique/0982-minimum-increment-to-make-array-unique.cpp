class Solution {
public:
    static int minIncrementForUnique(vector<int>& nums) { 
        const int n=nums.size();
        sort(nums.begin(), nums.end());
        int inc=0;
        int locMax=0;
        for(int x: nums){
            locMax=max(x, locMax);
            inc+=(locMax-x);
            locMax++;
        }
        
        return inc;
    }
};
