class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> m;
        int ans=0;
        bool odd=false;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }

        for(auto &i:m){
            if(i.second%2==0){
                 ans+=i.second;
            }else{
                ans+=i.second -1;
                odd=true;
            }
        }

        if(odd) ans+=1;
        return ans;
    }
};