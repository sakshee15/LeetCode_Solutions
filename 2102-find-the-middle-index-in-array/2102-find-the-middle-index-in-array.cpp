class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> prefix,suffix;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            prefix.push_back(sum);
            sum+=nums[i];
        }
        sum=0;
         for(int i=nums.size()-1;i>=0;i--){
            suffix.push_back(sum);
            sum+=nums[i];
        }
        reverse(suffix.begin(),suffix.end());
        for(int i=0;i<nums.size();i++){
          if(prefix[i]==suffix[i]) return i;
        }
        return -1;
    }
};