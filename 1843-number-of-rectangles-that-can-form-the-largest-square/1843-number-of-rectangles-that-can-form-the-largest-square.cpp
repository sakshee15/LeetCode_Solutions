class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rec) {
        vector<int>len;
        for(int i=0;i<rec.size();i++){
            len.push_back(min(rec[i][0],rec[i][1]));
        }
         int max_element = std::numeric_limits<int>::min();
    int max_element_count = 0;

    for (const int& element : len) {
        if (element > max_element) {
            max_element = element;
            max_element_count = 1;
        } else if (element == max_element) {
            max_element_count++;
        }
    }
    return max_element_count;
       }
};