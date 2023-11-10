class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s;
        for(int n:nums){
            if(n!=0) s.insert(n);
        }
        return s.size();
    }
};