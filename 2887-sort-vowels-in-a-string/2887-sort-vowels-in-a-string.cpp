class Solution {
public:
    string sortVowels(string s) {
        vector<char> st;
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                st.push_back(s[i]);
            }
        }
        sort(st.begin(),st.end());
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
               s[i]=st[a];
               a++;
            }
        }
        return s;
    }
};