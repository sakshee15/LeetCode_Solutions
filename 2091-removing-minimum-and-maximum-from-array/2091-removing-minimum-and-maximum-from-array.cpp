class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mx=nums[0],mn=nums[0],maxIdx=0,minIdx=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]){
                mx=nums[i];
                maxIdx=i;
            }else if(mn>nums[i]){
                mn=nums[i];
                minIdx=i;
            }

        }
        int n=nums.size();
         

            if(minIdx<n/2 && maxIdx<n/2){
                return max(minIdx,maxIdx)+1;
            }else if(minIdx>=n/2 && maxIdx>=n/2){
                return n-min(minIdx,maxIdx);
            }else{
                int a = max(minIdx,maxIdx)+1;
                int b = n-min(minIdx,maxIdx);
                int c = min(minIdx,maxIdx) + 1 + (n-max(minIdx,maxIdx));
                return min(min(a,b),c);
            }
            return 0;
    }
};