class Solution {
public:

    void fun(int start,int k,int n, vector<int>&temp,vector<vector<int>>&ans){
          if(n<0||k<0) return;
          if(n==0 && k==0){
              ans.push_back(temp);
              return;
          }
           if(start>9) return;
          temp.push_back(start);
          fun(start+1,k-1,n-start,temp,ans);
          temp.pop_back();
          fun(start+1,k,n,temp,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        fun(1,k,n,temp,ans);
        return ans;
    }
};