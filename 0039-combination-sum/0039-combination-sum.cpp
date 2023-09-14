class Solution {
public:
    vector<vector<int>> fun(int low,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int>&temp){
        if(low==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return ans;
        }
        if(candidates[low]<=target){
            temp.push_back(candidates[low]);
            fun(low,candidates,target-candidates[low],ans,temp);
            temp.pop_back();
        }
        fun(low+1,candidates,target,ans,temp);
        return ans;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        return fun(0,candidates,target,ans,temp);
    }
};