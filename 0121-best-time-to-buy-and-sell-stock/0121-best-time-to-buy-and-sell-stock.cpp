class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minStock=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]<minStock){
                minStock=prices[i-1];
            }
            maxProfit=max(maxProfit,prices[i]-minStock);
        }
        return maxProfit;
    }
};
