class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,count=0;
        for(int i=0;i<t.length();i++){
            if(s[j]==t[i]){
               count++;
               j++;
            }
        }
        cout<<count;
        return s.length()==count;
    }
};