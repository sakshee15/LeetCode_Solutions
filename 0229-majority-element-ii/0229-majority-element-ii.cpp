class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int len = n/3;
        int n1,n2,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(n1==nums[i]) c1++;
            else if(n2==nums[i]) c2++;
            else if(c1==0) {
                n1=nums[i];
                c1=1;
            }else if(c2==0){
                n2=nums[i];
                c2=1; 
            }else{
               c1--;
               c2--;
            }
        }
        c1=c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==n1) c1++;
            if(nums[i]==n2) c2++;
        }

        if(c1>len){
            ans.push_back(n1);
        }
        if(c2>len){
            ans.push_back(n2);
        }
        return ans;
        
    }
};