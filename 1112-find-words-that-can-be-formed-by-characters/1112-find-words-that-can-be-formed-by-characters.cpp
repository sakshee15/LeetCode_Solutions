class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> m;
        int cnt=0;
        for(char c:chars) m[c]++;
        for(string word:words){
            unordered_map<char,int> m1;
            for(char c:word) m1[c]++;
            bool a=true;
            for(auto &i:m1){
                if(m1[i.first]>m[i.first]) a=false;
            }
            if(a){
               cnt+=word.length(); 
            }
        }
        return cnt;
    }
};