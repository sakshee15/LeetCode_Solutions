class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length(),l2=t.length();
        if(l1!=l2) return false;
        unordered_map<char,int> m1,m2;
        for(int i=0;i<l1;i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for (auto &entry : m1) {
            char c = entry.first;
            if (m2.find(c) == m2.end() || m2[c] != entry.second) {
                return false;
            }
        }
        return true;
    }
};