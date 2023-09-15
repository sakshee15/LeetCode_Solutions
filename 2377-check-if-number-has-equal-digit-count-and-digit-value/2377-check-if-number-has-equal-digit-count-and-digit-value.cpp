class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> map;
        for(int i=0;i<num.length();i++){
            map[num[i]-'0']++;
        }
        for(int i=0;i<num.length();i++){
            cout<<map[i]<<" "<<num[i]<<endl;
            if((num[i]-'0')!=map[i]) return false;
        }
        return true;
    }
};