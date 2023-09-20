class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         unordered_map<int,int>map;
        for(int i=0;i<numbers.size();i++){
           int more = target-numbers[i];
           if(map.find(more)!=map.end()){
               return {map[more]+1,i+1};
           }
           map[numbers[i]]=i;
            }
        
        return {};
    }
};