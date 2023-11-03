class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> s;
        int cnt=0;
        for(int i=1;i<=k;i++){
            s.insert(i);
        }
        while(s.size()!=0){
            s.erase(nums.back());
            nums.pop_back();
            cnt++;
        }
        return cnt;
    }
};