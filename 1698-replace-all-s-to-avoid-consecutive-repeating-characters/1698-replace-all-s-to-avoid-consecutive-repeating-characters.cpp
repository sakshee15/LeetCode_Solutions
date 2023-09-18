class Solution {
public:
    string modifyString(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
               char x='a';
               if(i==0){
                 while(s[i+1]==x){
                   x++;
               }  
               }else if(i==s.length()-1){
                   while(s[i-1]==x){
                   x++;
               }
               }else{
               while(s[i-1]==x || s[i+1]==x){
                   x++;
               }
               }
              s[i]=x;
            }
        }
        return s;
    }
};