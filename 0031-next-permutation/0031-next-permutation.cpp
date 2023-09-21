// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int ind=-1,n=nums.size();
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 ind=i;
//                 break;
//             }
//         }
//         if(ind==-1)  reverse(nums.begin(),nums.end());
//         else{
//         for(int i=n-1;i>=ind;i--){
//             if(nums[i]>nums[ind]){
//                 swap(nums[i],nums[ind]);
//                 break;
//             }
//         }
//         reverse(nums.begin()+ind+1,nums.end());
//         }
//     }
// };
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        if (i == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};
