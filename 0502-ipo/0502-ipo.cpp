class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> pr;
        int n=profits.size();
        for(int i=0;i<profits.size();i++){
            pr.emplace_back(capital[i],profits[i]);
        }
        sort(pr.begin(),pr.end());
        priority_queue<int> heap;
        int i=0;
        for(int j=0;j<k;j++){
           while(i<n && pr[i].first<=w){
             heap.push(pr[i].second);
             i++;
           }
           if(heap.empty()) break;
           w+=heap.top();
           heap.pop();
        }  
        return w;
    }
};