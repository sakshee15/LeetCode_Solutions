class Solution {
public:
    int countTime(string time) {
        int h1, h2, m1, m2;
        h1 = h2 = m1 = m2 = -1; // default -1
        // extracting digits
        if(isdigit(time[0]))
            h1 = time[0] - '0';
        if(isdigit(time[1]))
            h2 = time[1] - '0';
        if(isdigit(time[3]))
            m1 = time[3] - '0';
        if(isdigit(time[4]))
            m2 = time[4] - '0';
        
        int res = 1;
        
        if(h1 == -1 && h2 == -1)
            res *= 24;
        else if(h1 == -1)
            res *= (h2 < 4) ? 3 : 2;
        else if(h2 == -1)
            res *= (h1 < 2) ? 10 : 4;
        
        if(m1 == -1 && m2 == -1)
            res *= 60;
        else if(m1 == -1)
            res *= 6;
        else if(m2 == -1)
            res *= 10;
        return res;
    }
};