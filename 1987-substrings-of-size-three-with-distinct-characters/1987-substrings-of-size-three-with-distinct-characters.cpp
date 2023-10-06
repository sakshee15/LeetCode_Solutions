class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3) return 0;
        char a=s[0];
        char b=s[1];
        char c=s[2];
        if(a!=b && b!=c && c!=a) count++;
        for(int i=3;i<s.size();i++){
            a=b;
            b=c;
            c=s[i];
            if(a!=b && b!=c && c!=a) count++;
        }

        return count;
    }
};