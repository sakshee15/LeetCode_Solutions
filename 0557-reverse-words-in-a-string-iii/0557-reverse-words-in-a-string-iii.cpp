class Solution {
public:
    string reverseWords(string s) {
        string ans,temp;

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
               ans+=string(temp.rbegin(),temp.rend());
               ans+=' '; 
               temp="";
            }else if(i==s.length()-1){
               temp+=s[i];
               ans+=string(temp.rbegin(),temp.rend());
            }else{
                temp+=s[i];
            }
        }


        return ans;
    }
};