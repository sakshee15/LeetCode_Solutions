class Solution {
public:
void fun(int low,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int>&temp){
        if(target==0){
                ans.push_back(temp);
                return;
            }
        for(int i=low;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i>low && candidates[i]==candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            fun(i+1,candidates,target-candidates[i],ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        fun(0,candidates,target,ans,temp);
        return ans;
    }
};
