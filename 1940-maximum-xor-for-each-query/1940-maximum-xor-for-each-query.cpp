// class Solution {
// public:
//     vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
//         int maxXOR=pow(2,maximumBit)-1;
//         int n=nums.size();
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             int x=0;
//            for(int j=0;j<nums.size();j++){
//               x^=nums[j];
//            }
//            for(int j=pow(2,maximumBit)-1;j>=0;j--){
//                if((x^j)==maxXOR){
//                    ans.push_back(j);
//                    break;
//                }
//            }
//            nums.pop_back();
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxXOR = (1 << maximumBit) - 1;
        int n = nums.size();
        vector<int> ans(n);
        
        int x = 0;
        for (int num : nums) {
            x ^= num;
        }
        
        for (int i = 0; i < n; i++) {
            ans[i] = maxXOR ^ x;
            x ^= nums[n - 1 - i];
        }
        
        return ans;
    }
};
