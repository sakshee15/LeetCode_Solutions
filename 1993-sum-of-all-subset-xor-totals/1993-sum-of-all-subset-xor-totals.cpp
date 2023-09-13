class Solution {
public:
    int XOR(vector<int> &num){
        if(num.size()==0) return 0;
        int ans=num[0];
        for(int i=1;i<num.size();i++){
           ans^=num[i];
        }
        return ans;
    }
     int f(int s,int n,vector<int> &ds,vector<int> &nums){
        if(s>=n){
            cout<<XOR(ds)<<endl;
        return XOR(ds);
        }
      ds.push_back(nums[s]);
      int l = f(s+1,n,ds,nums);
      ds.pop_back();
      int r = f(s+1,n,ds,nums);
      return l+r;

     }
    int subsetXORSum(vector<int>& nums) {
        vector<int> ds;
        return f(0,nums.size(),ds,nums);
    }
};