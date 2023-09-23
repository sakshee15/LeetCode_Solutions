class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {   
        long long sum = 0;
        long long row = 0, col = 0;
        unordered_map<int, int> r, c;
         for(int i=queries.size()-1;i>=0;i--){
            if(queries[i][0]==0){
                if(r[queries[i][1]]!=0) queries[i][0]=2;
                else r[queries[i][1]]=1;
            }
            else{
                if(c[queries[i][1]]!=0) queries[i][0]=2;
                else c[queries[i][1]]=1;                
            }
        }
        for (int i = 0; i < queries.size(); i++) {
            int type = queries[i][0];
            int idx = queries[i][1];
            int val = queries[i][2];
            
            if (type == 0) {
                sum += val * n;
                sum-=col;
                row += val;
               
            } else if(type==1){
                sum += val * n; 
                sum-=row;
                col += val;
            }
        }
        
        return sum;
    }
};
