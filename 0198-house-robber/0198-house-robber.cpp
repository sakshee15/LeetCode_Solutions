// class Solution {
// public:
//     int rob(vector<int>& nums) {
//        int n=nums.size();
//        int prev=nums[0];
//        int prev2=0;
//        for(int i=1;i<n;i++){
//            int pick = nums[i];
//            if(i>1) pick+=prev2;
//            int notPick=prev;
//            int curr=max(pick,notPick);
//            prev2=prev;
//            prev=curr;
//        }
//         return prev;
//     }
// };

class Solution {
public:
    int rob(vector<int>& nums) {
       int n = nums.size();
       if (n == 0) return 0;
       if (n == 1) return nums[0];
       
       int prev = nums[0];
       int prev2 = 0;

       for (int i = 1; i < n; i++) {
           int pick = nums[i];
           if(i>1) pick+=prev2;
           int notPick = prev;
           int curr = max(pick, notPick);

           prev2 = prev;
           prev = curr;
       }
       
       return prev;
    }
};
