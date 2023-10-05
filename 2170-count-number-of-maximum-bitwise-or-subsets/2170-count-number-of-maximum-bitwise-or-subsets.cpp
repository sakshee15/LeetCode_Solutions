class Solution {
public:
    
    int res=0,mx=0;
    void backtrack(vector<int> &nums, int start, vector<int> &ans) {
        if(!ans.empty()){
        // for (int i = 0; i < ans.size(); i++) {
        //  cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        int x = ans[0];
        for (int i = 1; i < ans.size(); i++) {
            x |= ans[i];
        }
        if(x==mx) res++;
        }
        for (int i = start; i < nums.size(); i++) {
            ans.push_back(nums[i]);
            backtrack(nums, i + 1, ans); 
            ans.pop_back();
        }
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int> ans;
        int x=nums[0];
        for(int i=0;i<nums.size();i++){
           x|=nums[i];
        }
        mx=x;
        backtrack(nums, 0, ans); 
        return res;
    }
};
