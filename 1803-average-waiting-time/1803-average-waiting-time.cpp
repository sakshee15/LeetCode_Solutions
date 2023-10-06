// class Solution {
// public:
//     double averageWaitingTime(vector<vector<int>>& customers) {
//         long long ft=customers[0][0],wt=0;
//         int n=customers.size();
//         for(int i=0;i<n;i++){
//             ft+=customers[i][1];
//             wt+=(ft-customers[i][0]);
//         }
//         return static_cast<double>(wt)/n;

//     }
// };
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long ft = 0;
        long long wt = 0;
        int n = customers.size();

        for (int i = 0; i < n; i++) {
            if (ft < customers[i][0]) {
                ft = customers[i][0];
            }
            
            ft += customers[i][1];
            wt += ft - customers[i][0];
        }
        
        return static_cast<double>(wt) / n;
    }
};
