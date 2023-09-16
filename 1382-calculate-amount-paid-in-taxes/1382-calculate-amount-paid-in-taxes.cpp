class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int ub = 0;
        double ans = 0;
        
        for (int i = 0; i < brackets.size(); i++) {
            int cost = brackets[i][0] - ub;
            
            if (income >= cost) {
                ans += (cost * brackets[i][1]) / 100.00; 
                income -= cost;
            } else {
                 ans += (income * brackets[i][1]) / 100.00; 
                 break;  
            }
            
            ub = brackets[i][0];
        }
        
        return ans;
    }
};
