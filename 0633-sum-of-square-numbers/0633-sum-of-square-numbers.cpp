class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long a=0;a*a<=c;a++){
            long long b=c - (long long)(a*a);
            if(binary(0,b,b)) return true;
        }
        return false;
    }

    bool binary(int s,int e,int n){
        if(s>e) return false;
        long long mid=s+(e-s)/2;
        if(mid*mid==n) return true;
        if(mid*mid>n) return binary(s,mid-1,n);
        return binary(mid+1,e,n);
    }
};