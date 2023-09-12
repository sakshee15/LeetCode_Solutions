class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=0,n=num.length();
        for(int j=n-1;j>=0;j--){
            if(num[j]!='0'){
                i = j;
                break;
            }
        }
        return num.substr(0,i+1);
    }
};