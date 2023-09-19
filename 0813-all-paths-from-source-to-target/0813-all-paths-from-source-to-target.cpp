class Solution {
public:
    void fun(vector<vector<int>>&ans,vector<vector<int>>&graph,vector<int>&temp,int source,int target){
        if(source==target){
            temp.push_back(source);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        temp.push_back(source);
        for(int i=0;i<graph[source].size();i++){
            fun(ans,graph,temp,graph[source][i],target);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int>temp;
        fun(ans,graph,temp,0,graph.size()-1);
        return ans;
    }
};